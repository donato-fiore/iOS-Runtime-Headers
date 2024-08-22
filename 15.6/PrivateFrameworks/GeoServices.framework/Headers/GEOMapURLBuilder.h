// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPURLBUILDER_H
#define GEOMAPURLBUILDER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "GEOURLCollectionStorage.h"
#import "GEOURLExtraStorage.h"
#import "GEOMuninViewState.h"

@interface GEOMapURLBuilder : NSObject {
    NSMutableDictionary *_dict;
}


@property (retain, nonatomic) GEOURLCollectionStorage *collectionStorage; // ivar: _collectionStorage
@property (retain, nonatomic) GEOURLExtraStorage *extraStorage; // ivar: _extraStorage
@property (retain, nonatomic) GEOMuninViewState *muninViewState; // ivar: _muninViewState


+(id)URLForAddress:(id)arg0 ;
+(id)URLForAddress:(id)arg0 label:(id)arg1 ;
+(id)URLForCameraAt:(struct ? )arg0 altitude:(CGFloat)arg1 rotation:(CGFloat)arg2 tilt:(CGFloat)arg3 roll:(CGFloat)arg4 ;
+(id)URLForCameraAt:(struct ? )arg0 zoomLevel:(CGFloat)arg1 rotation:(CGFloat)arg2 tilt:(CGFloat)arg3 roll:(CGFloat)arg4 ;
+(id)URLForCollectionStorage:(id)arg0 ;
+(id)URLForCoordinate:(struct ? )arg0 ;
+(id)URLForCoordinate:(struct ? )arg0 address:(id)arg1 label:(id)arg2 ;
+(id)URLForCoordinate:(struct ? )arg0 address:(id)arg1 label:(id)arg2 extraStorage:(id)arg3 ;
+(id)URLForCoordinate:(struct ? )arg0 address:(id)arg1 label:(id)arg2 extraStorage:(id)arg3 useWebPlaceCard:(BOOL)arg4 ;
+(id)URLForCoordinate:(struct ? )arg0 address:(id)arg1 label:(id)arg2 extraStorage:(id)arg3 useWebPlaceCard:(BOOL)arg4 muninViewState:(id)arg5 ;
+(id)URLForCoordinate:(struct ? )arg0 label:(id)arg1 ;
+(id)URLForCuratedCollection:(NSUInteger)arg0 provider:(int)arg1 ;
+(id)URLForDirectionsFrom:(id)arg0 to:(id)arg1 ;
+(id)URLForDirectionsFrom:(id)arg0 to:(id)arg1 transport:(int)arg2 ;
+(id)URLForDirectionsFromHereTo:(id)arg0 ;
+(id)URLForDirectionsFromHereTo:(id)arg0 label:(id)arg1 muid:(NSUInteger)arg2 provider:(int)arg3 transport:(int)arg4 ;
+(id)URLForDirectionsFromHereTo:(id)arg0 transport:(int)arg1 ;
+(id)URLForExternalBusiness:(id)arg0 id:(id)arg1 ofContentProvider:(id)arg2 ;
+(id)URLForInternalBusiness:(id)arg0 id:(NSUInteger)arg1 provider:(int)arg2 ;
+(id)URLForInternalBusiness:(id)arg0 id:(NSUInteger)arg1 provider:(int)arg2 coordinate:(struct ? )arg3 address:(id)arg4 ;
+(id)URLForInternalBusiness:(id)arg0 id:(NSUInteger)arg1 provider:(int)arg2 coordinate:(struct ? )arg3 address:(id)arg4 extraStorage:(id)arg5 ;
+(id)URLForInternalBusiness:(id)arg0 id:(NSUInteger)arg1 provider:(int)arg2 coordinate:(struct ? )arg3 address:(id)arg4 extraStorage:(id)arg5 useWebPlaceCard:(BOOL)arg6 ;
+(id)URLForInternalBusiness:(id)arg0 id:(NSUInteger)arg1 provider:(int)arg2 coordinate:(struct ? )arg3 address:(id)arg4 extraStorage:(id)arg5 useWebPlaceCard:(BOOL)arg6 muninViewState:(id)arg7 ;
+(id)URLForPublisher:(NSUInteger)arg0 provider:(int)arg1 ;
+(id)URLForSearch:(id)arg0 ;
+(id)URLForSearch:(id)arg0 at:(struct ? )arg1 span:(struct ? )arg2 ;
+(id)URLForSearch:(id)arg0 at:(struct ? )arg1 zoomLevel:(CGFloat)arg2 ;
+(id)URLForSearch:(id)arg0 near:(struct ? )arg1 ;
+(id)URLForShowFavoritesType:(NSInteger)arg0 ;
+(id)URLForTransitLine:(NSUInteger)arg0 withName:(id)arg1 mapRegion:(id)arg2 ;
-(id)_stringForCoordinate2DPointer:(struct ? *)arg0 ;
-(id)_stringForCoordinateSpanPointer:(struct ? *)arg0 ;
-(id)build;
-(id)buildForCollections;
-(id)buildForWeb;
-(id)buildForWebPlaceCard;
-(id)initForAddress:(id)arg0 label:(id)arg1 ;
-(id)initForCameraAt:(struct ? )arg0 altitude:(CGFloat)arg1 rotation:(CGFloat)arg2 tilt:(CGFloat)arg3 roll:(CGFloat)arg4 ;
-(id)initForCameraAt:(struct ? )arg0 zoomLevel:(CGFloat)arg1 rotation:(CGFloat)arg2 tilt:(CGFloat)arg3 roll:(CGFloat)arg4 ;
-(id)initForCollectionStorage:(id)arg0 ;
-(id)initForCoordinate:(struct ? )arg0 address:(id)arg1 label:(id)arg2 ;
-(id)initForCoordinate:(struct ? )arg0 label:(id)arg1 ;
-(id)initForCuratedCollection:(NSUInteger)arg0 provider:(int)arg1 ;
-(id)initForDirectionsTo:(id)arg0 ;
-(id)initForExternalBusiness:(id)arg0 id:(id)arg1 ofContentProvider:(id)arg2 ;
-(id)initForInternalBusiness:(id)arg0 id:(NSUInteger)arg1 provider:(int)arg2 ;
-(id)initForPublisher:(NSUInteger)arg0 provider:(int)arg1 ;
-(id)initForSearch:(id)arg0 ;
-(id)initForShowFavoritesType:(NSInteger)arg0 ;
-(id)initForTransitLine:(NSUInteger)arg0 withName:(id)arg1 mapRegion:(id)arg2 ;
-(void)_removeParametersAllBut:(id)arg0 ;
-(void)addCodable:(id)arg0 key:(id)arg1 compressedKey:(id)arg2 ;
-(void)setBusinessAddress:(id)arg0 ;
-(void)setBusinessCoordinate:(struct ? )arg0 ;
-(void)setContentProvider:(id)arg0 ;
-(void)setDestinationLabel:(id)arg0 ;
-(void)setDestinationMUID:(NSUInteger)arg0 provider:(int)arg1 ;
-(void)setDisplayRegion:(struct ? )arg0 ;
-(void)setMapRegion:(id)arg0 ;
-(void)setMapType:(int)arg0 ;
-(void)setNear:(struct ? )arg0 ;
-(void)setSearchLocation:(struct ? )arg0 span:(struct ? )arg1 ;
-(void)setSearchLocation:(struct ? )arg0 zoomLevel:(CGFloat)arg1 ;
-(void)setStartAddress:(id)arg0 ;
-(void)setTransportType:(int)arg0 ;


@end


#endif