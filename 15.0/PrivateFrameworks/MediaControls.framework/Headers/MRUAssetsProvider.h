// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUASSETSPROVIDER_H
#define MRUASSETSPROVIDER_H

@class NSCache, NSMutableDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface MRUAssetsProvider : NSObject

@property (readonly) NSCache *applicationCache; // ivar: _applicationCache
@property (readonly) NSMutableDictionary *completionBlocks; // ivar: _completionBlocks
@property (readonly) NSCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) NSDate *purgeApplicationCacheDate; // ivar: _purgeApplicationCacheDate


+(id)airPlayControlAudioForInterfaceStyle:(NSInteger)arg0 ;
+(id)airPlayControlVideoForInterfaceStyle:(NSInteger)arg0 ;
+(id)airplay;
+(id)airplayVideo;
+(id)airpods;
+(id)airpodsMax;
+(id)airpodsPro;
+(id)appletv;
+(id)backward;
+(id)beats;
+(id)beatsEarphones;
+(id)beatsHeadphones;
+(id)bluetooth;
+(id)carplay;
+(id)controlOtherSpeakers;
+(id)dislike;
+(id)display;
+(id)forward;
+(id)goBackwardForTimeInterval:(CGFloat)arg0 ;
+(id)goForwardForTimeInterval:(CGFloat)arg0 ;
+(id)headphones;
+(id)hearingDevice;
+(id)hifi;
+(id)hifiAndHomepod;
+(id)hifiAndHomepodMini;
+(id)hifiPair;
+(id)homepod;
+(id)homepodAndAppleTV;
+(id)homepodAndHomepodMini;
+(id)homepodMini;
+(id)homepodMiniAndAppleTV;
+(id)homepodMiniPair;
+(id)homepodPair;
+(id)languageOptions;
+(id)like;
+(id)mac;
+(id)mapImageNameNumberAware:(id)arg0 ;
+(id)mediaBox;
+(id)mediaStick;
+(id)menu;
+(id)packageDescriptionWithName:(id)arg0 ;
+(id)packageWithName:(id)arg0 ;
+(id)pause;
+(id)phone;
+(id)play;
+(id)powerBeats;
+(id)powerBeatsPro;
+(id)routingAccessoryMultiDeselected;
+(id)routingAccessoryMultiSelected;
+(id)routingAccessorySelected;
+(id)routingOutline;
+(id)sharedAssetsProvider;
+(id)sharing;
+(id)stop;
+(id)systemImageNamedNumberAware:(id)arg0 ;
+(id)tv;
+(id)tvRemote;
+(id)volumeMax;
+(id)volumeMin;
+(id)volumeThumbWithSize:(CGFloat)arg0 ;
+(id)volumeTrackWithHeight:(CGFloat)arg0 ;
+(id)wishlist;
-(id)applicationIconForBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)imageForURL:(id)arg0 completion:(id)arg1 ;


@end


#endif