// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTINUOUSFEEDBACK_H
#define _UICONTINUOUSFEEDBACK_H

@class UIFeedback, NSString;
@protocol _UIFeedbackContinuousPlayable;



@interface _UIContinuousFeedback : UIFeedback <_UIFeedbackContinuousPlayable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)continuousFeedbackForType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_effectiveDuration;
-(NSUInteger)_effectiveEventType;
-(id)_debugDictionary;
-(id)_playableProtocol;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)_playedAtTime:(CGFloat)arg0 engine:(id)arg1 ;


@end


#endif