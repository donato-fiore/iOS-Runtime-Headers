// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SVXUSERFEEDBACKAUDIOCONTENTMUTATION_H
#define _SVXUSERFEEDBACKAUDIOCONTENTMUTATION_H

@class NSURL, NSString;
@protocol SVXUserFeedbackAudioContentMutating;

#import <Foundation/Foundation.h>

#import "SVXUserFeedbackAudioContent.h"

@interface _SVXUserFeedbackAudioContentMutation : NSObject <SVXUserFeedbackAudioContentMutating>

 {
    SVXUserFeedbackAudioContent *_baseModel;
    NSURL *_itemURL;
    NSUInteger _numberOfLoops;
    CGFloat _fadeInDuration;
    CGFloat _fadeOutDuration;
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
-(void)setItemURL:(id)arg0 ;
-(void)setNumberOfLoops:(NSUInteger)arg0 ;


@end


#endif