// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDISCRETEFEEDBACK_H
#define _UIDISCRETEFEEDBACK_H

@class UIFeedback, NSString;
@protocol _UIFeedbackDiscretePlayable;



@interface _UIDiscreteFeedback : UIFeedback <_UIFeedbackDiscretePlayable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority; // ivar: _highPriority
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)discreteFeedbackForType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPlaying;
-(NSUInteger)_effectiveEventType;
-(id)_debugDictionary;
-(id)_playableProtocol;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(unsigned int)_effectiveSystemSoundID;


@end


#endif