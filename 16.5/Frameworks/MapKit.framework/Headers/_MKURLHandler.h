// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKURLHANDLER_H
#define _MKURLHANDLER_H

@protocol _MKURLHandlerDelegate;

#import <Foundation/Foundation.h>


@interface _MKURLHandler : NSObject

@property (weak, nonatomic) NSObject<_MKURLHandlerDelegate> *delegate; // ivar: _delegate


+(BOOL)canHandleURL:(id)arg0 ;
+(unsigned char)_MKGetURLSchemeTypeFor:(id)arg0 ;
-(BOOL)_handleMapItemHandlesURL:(id)arg0 sourceApplication:(id)arg1 context:(id)arg2 ;
-(BOOL)_handleMapItemURL:(id)arg0 sourceApplication:(id)arg1 context:(id)arg2 ;
-(BOOL)_handleMapItems:(id)arg0 withOptions:(id)arg1 url:(id)arg2 sourceApplication:(id)arg3 context:(id)arg4 ;
-(BOOL)_handleMapsURL:(id)arg0 sourceApplication:(id)arg1 context:(id)arg2 ;
-(BOOL)_handleSharedMapURL:(id)arg0 sourceApplication:(id)arg1 context:(id)arg2 ;
-(BOOL)_treatAllCuratedCollectionsFrom:(id)arg0 ;
-(BOOL)_treatCarDestinationsFrom:(id)arg0 ;
-(BOOL)_treatCollectionFrom:(id)arg0 ;
-(BOOL)_treatContentProvider:(id)arg0 ;
-(BOOL)_treatCuratedCollectionFrom:(id)arg0 ;
-(BOOL)_treatFavoritesFrom:(id)arg0 ;
-(BOOL)_treatMuninViewStateFrom:(id)arg0 ;
-(BOOL)_treatNavigationDirectionsFrom:(id)arg0 ;
-(BOOL)_treatPinPositionFrom:(id)arg0 ;
-(BOOL)_treatPublisherFrom:(id)arg0 ;
-(BOOL)_treatRegionFrom:(id)arg0 ;
-(BOOL)_treatSearchFrom:(id)arg0 ;
-(BOOL)_treatSearchRegionFrom:(id)arg0 ;
-(BOOL)_treatTesterFrom:(id)arg0 ;
-(BOOL)_treatTransitLineFrom:(id)arg0 ;
-(BOOL)handleURL:(id)arg0 sourceApplication:(id)arg1 context:(id)arg2 ;
-(void)_treatGenericOptionsFrom:(id)arg0 ;
-(void)_treatMapTypeFrom:(id)arg0 ;
-(void)_treatTrackingModeFrom:(id)arg0 ;
-(void)adjustOptionsForRAP:(id)arg0 options:(*id)arg1 ;


@end


#endif