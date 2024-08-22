// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFAUDIOPLAYBACKREQUESTMUTATION_H
#define _AFAUDIOPLAYBACKREQUESTMUTATION_H

@class NSURL, NSData, NSDictionary, NSString;
@protocol AFAudioPlaybackRequestMutating;

#import <Foundation/Foundation.h>

#import "AFAudioPlaybackRequest.h"

@interface _AFAudioPlaybackRequestMutation : NSObject <AFAudioPlaybackRequestMutating>

 {
    AFAudioPlaybackRequest *_baseModel;
    NSURL *_itemURL;
    NSData *_itemData;
    NSInteger _numberOfLoops;
    float _volume;
    CGFloat _fadeInDuration;
    CGFloat _fadeOutDuration;
    NSDictionary *_userInfo;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setFadeInDuration:(CGFloat)arg0 ;
-(void)setFadeOutDuration:(CGFloat)arg0 ;
-(void)setItemData:(id)arg0 ;
-(void)setItemURL:(id)arg0 ;
-(void)setNumberOfLoops:(NSInteger)arg0 ;
-(void)setUserInfo:(id)arg0 ;
-(void)setVolume:(float)arg0 ;


@end


#endif