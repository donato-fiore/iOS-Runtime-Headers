// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICUSTOMDISCRETEFEEDBACK_H
#define _UICUSTOMDISCRETEFEEDBACK_H

@class UIDiscreteFeedback;



@interface _UICustomDiscreteFeedback : UIDiscreteFeedback

@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) unsigned int systemSoundID; // ivar: _systemSoundID


+(id)customDiscreteFeedbackWithEventType:(NSUInteger)arg0 systemSoundID:(unsigned int)arg1 ;
+(id)type;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_effectiveEventType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(unsigned int)_effectiveSystemSoundID;


@end


#endif