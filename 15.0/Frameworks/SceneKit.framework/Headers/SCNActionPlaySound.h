// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNACTIONPLAYSOUND_H
#define SCNACTIONPLAYSOUND_H



#import "SCNAction.h"

@interface SCNActionPlaySound : SCNAction {
    *SCNCPlaySound _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)playAudioSource:(id)arg0 waitForCompletion:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)parameters;
-(id)reversedAction;
-(void)_setupDuration;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif