// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUASSETSPROVIDER_H
#define MRUASSETSPROVIDER_H

@class NSCache, NSMutableDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface MRUAssetsProvider : NSObject

@property (readonly) NSCache *applicationCache; // ivar: _applicationCache
@property (readonly) NSMutableDictionary *completionBlocks; // ivar: _completionBlocks
@property (readonly) NSCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) NSDate *purgeApplicationCacheDate; // ivar: _purgeApplicationCacheDate


+(id)airplay;
+(id)airplayVideo;
+(id)backward;
+(id)backwardSymbol;
+(id)collapsedRoutingChevron;
+(id)controlOtherSpeakers;
+(id)dislike;
+(id)emptyArtwork;
+(id)expandedRoutingChevron;
+(id)favoritePackageName;
+(id)favoriteSymbol;
+(id)forward;
+(id)forwardBackwardPackageName;
+(id)forwardSymbol;
+(id)genericDevices;
+(id)goBackwardForTimeInterval:(CGFloat)arg0 ;
+(id)goBackwardSymbolForTimeInterval:(CGFloat)arg0 ;
+(id)goForwardForTimeInterval:(CGFloat)arg0 ;
+(id)goForwardSymbolForTimeInterval:(CGFloat)arg0 ;
+(id)languageOptions;
+(id)like;
+(id)menu;
+(id)packageDescriptionWithName:(id)arg0 ;
+(id)packageWithName:(id)arg0 ;
+(id)pause;
+(id)pauseSymbol;
+(id)phone;
+(id)play;
+(id)playPauseStopPackageName;
+(id)playSymbol;
+(id)routingAccessoryMultiDeselected;
+(id)routingAccessoryMultiSelected;
+(id)routingAccessorySelected;
+(id)routingNearby;
+(id)sharedAssetsProvider;
+(id)sharing;
+(id)stop;
+(id)stopSymbol;
+(id)tvRemote;
+(id)volumeMax;
+(id)volumeMin;
+(id)volumeRelativeMinus;
+(id)volumeRelativePlus;
+(id)wirelessSharing;
+(id)wishlist;
-(id)init;
-(void)applicationIconForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)imageForURL:(id)arg0 completion:(id)arg1 ;


@end


#endif