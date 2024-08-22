// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFSPEECHRECORDINGALERTPOLICY_H
#define AFSPEECHRECORDINGALERTPOLICY_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AFSpeechRecordingAlertBehavior.h"

@interface AFSpeechRecordingAlertPolicy : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) AFSpeechRecordingAlertBehavior *startingAlertBehavior; // ivar: _startingAlertBehavior
@property (readonly, copy, nonatomic) AFSpeechRecordingAlertBehavior *stoppedAlertBehavior; // ivar: _stoppedAlertBehavior
@property (readonly, copy, nonatomic) AFSpeechRecordingAlertBehavior *stoppedWithErrorAlertBehavior; // ivar: _stoppedWithErrorAlertBehavior


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartingAlertBehavior:(id)arg0 stoppedAlertBehavior:(id)arg1 stoppedWithErrorAlertBehavior:(id)arg2 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif