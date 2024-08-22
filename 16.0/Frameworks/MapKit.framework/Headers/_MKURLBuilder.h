// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKURLBUILDER_H
#define _MKURLBUILDER_H

@class GEOMapURLBuilder;

#import <Foundation/Foundation.h>


@interface _MKURLBuilder : NSObject {
    GEOMapURLBuilder *_realBuilder;
}




+(id)URLForAddress:(id)arg0 ;
+(id)URLForAddress:(id)arg0 label:(id)arg1 ;
+(id)URLForCollectionStorage:(id)arg0 ;
+(id)URLForCoordinate:(struct CLLocationCoordinate2D )arg0 ;
+(id)URLForCoordinate:(struct CLLocationCoordinate2D )arg0 address:(id)arg1 label:(id)arg2 ;
+(id)URLForCoordinate:(struct CLLocationCoordinate2D )arg0 address:(id)arg1 label:(id)arg2 extraStorage:(id)arg3 ;
+(id)URLForCoordinate:(struct CLLocationCoordinate2D )arg0 address:(id)arg1 label:(id)arg2 extraStorage:(id)arg3 useWebPlaceCard:(BOOL)arg4 ;
+(id)URLForCoordinate:(struct CLLocationCoordinate2D )arg0 address:(id)arg1 label:(id)arg2 extraStorage:(id)arg3 useWebPlaceCard:(BOOL)arg4 muninViewState:(id)arg5 ;
+(id)URLForCoordinate:(struct CLLocationCoordinate2D )arg0 address:(id)arg1 label:(id)arg2 useWebPlaceCard:(BOOL)arg3 ;
+(id)URLForCoordinate:(struct CLLocationCoordinate2D )arg0 label:(id)arg1 ;
+(id)URLForDirectionsFrom:(id)arg0 to:(id)arg1 ;
+(id)URLForDirectionsFrom:(id)arg0 to:(id)arg1 transport:(NSUInteger)arg2 ;
+(id)URLForDirectionsFrom:(id)arg0 toDestinations:(id)arg1 ;
+(id)URLForDirectionsFrom:(id)arg0 toDestinations:(id)arg1 transport:(NSUInteger)arg2 ;
+(id)URLForDirectionsFromHereTo:(id)arg0 ;
+(id)URLForDirectionsFromHereTo:(id)arg0 label:(id)arg1 muid:(NSUInteger)arg2 provider:(int)arg3 transport:(NSUInteger)arg4 ;
+(id)URLForDirectionsFromHereTo:(id)arg0 transport:(NSUInteger)arg1 ;
+(id)URLForDirectionsFromHereToDestinations:(id)arg0 ;
+(id)URLForDirectionsFromHereToDestinations:(id)arg0 transport:(NSUInteger)arg1 ;
+(id)URLForExternalBusiness:(id)arg0 id:(id)arg1 ofContentProvider:(id)arg2 ;
+(id)URLForInternalBusiness:(id)arg0 id:(NSUInteger)arg1 provider:(int)arg2 ;
+(id)URLForInternalBusiness:(id)arg0 id:(NSUInteger)arg1 provider:(int)arg2 coordinate:(struct CLLocationCoordinate2D )arg3 address:(id)arg4 ;
+(id)URLForInternalBusiness:(id)arg0 id:(NSUInteger)arg1 provider:(int)arg2 coordinate:(struct CLLocationCoordinate2D )arg3 address:(id)arg4 extraStorage:(id)arg5 ;
+(id)URLForInternalBusiness:(id)arg0 id:(NSUInteger)arg1 provider:(int)arg2 coordinate:(struct CLLocationCoordinate2D )arg3 address:(id)arg4 extraStorage:(id)arg5 useWebPlaceCard:(BOOL)arg6 ;
+(id)URLForInternalBusiness:(id)arg0 id:(NSUInteger)arg1 provider:(int)arg2 coordinate:(struct CLLocationCoordinate2D )arg3 address:(id)arg4 extraStorage:(id)arg5 useWebPlaceCard:(BOOL)arg6 muninViewState:(id)arg7 ;
+(id)URLForInternalBusiness:(id)arg0 id:(NSUInteger)arg1 provider:(int)arg2 coordinate:(struct CLLocationCoordinate2D )arg3 address:(id)arg4 useWebPlaceCard:(BOOL)arg5 ;
+(id)URLForInternalBusiness:(id)arg0 id:(NSUInteger)arg1 provider:(int)arg2 coordinate:(struct CLLocationCoordinate2D )arg3 address:(id)arg4 useWebPlaceCard:(BOOL)arg5 mapItemData:(id)arg6 ;
+(id)URLForSearch:(id)arg0 ;
+(id)URLForSearch:(id)arg0 at:(struct CLLocationCoordinate2D )arg1 span:(struct ? )arg2 ;
+(id)URLForSearch:(id)arg0 at:(struct CLLocationCoordinate2D )arg1 zoomLevel:(CGFloat)arg2 ;
+(id)URLForSearch:(id)arg0 near:(struct CLLocationCoordinate2D )arg1 ;
-(id)build;
-(id)buildForWeb;
-(id)initForAddress:(id)arg0 label:(id)arg1 ;
-(id)initForCoordinate:(struct CLLocationCoordinate2D )arg0 address:(id)arg1 label:(id)arg2 ;
-(id)initForCoordinate:(struct CLLocationCoordinate2D )arg0 label:(id)arg1 ;
-(id)initForDirectionsTo:(id)arg0 ;
-(id)initForDirectionsToAddresses:(id)arg0 ;
-(id)initForExternalBusiness:(id)arg0 id:(id)arg1 ofContentProvider:(id)arg2 ;
-(id)initForInternalBusiness:(id)arg0 id:(NSUInteger)arg1 provider:(int)arg2 ;
-(id)initForSearch:(id)arg0 ;
-(void)setBusinessAddress:(id)arg0 ;
-(void)setBusinessCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(void)setContentProvider:(id)arg0 ;
-(void)setDestinationLabel:(id)arg0 ;
-(void)setDestinationMUID:(NSUInteger)arg0 provider:(int)arg1 ;
-(void)setDisplayRegion:(struct ? )arg0 ;
-(void)setMapType:(NSUInteger)arg0 ;
-(void)setNear:(struct CLLocationCoordinate2D )arg0 ;
-(void)setSearchLocation:(struct CLLocationCoordinate2D )arg0 span:(struct ? )arg1 ;
-(void)setSearchLocation:(struct CLLocationCoordinate2D )arg0 zoomLevel:(CGFloat)arg1 ;
-(void)setStartAddress:(id)arg0 ;
-(void)setTransportType:(NSUInteger)arg0 ;


@end


#endif