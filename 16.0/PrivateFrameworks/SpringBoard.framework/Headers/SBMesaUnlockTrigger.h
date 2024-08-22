// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMESAUNLOCKTRIGGER_H
#define SBMESAUNLOCKTRIGGER_H

@protocol SBMesaUnlockTriggerDelegate;

#import <Foundation/Foundation.h>


@interface SBMesaUnlockTrigger : NSObject

@property (nonatomic) BOOL authenticated; // ivar: _authenticated
@property (weak, nonatomic) NSObject<SBMesaUnlockTriggerDelegate> *delegate; // ivar: _delegate


-(BOOL)bioUnlock;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)fingerOff;
-(void)fingerOn;
-(void)lockButtonDown;
-(void)menuButtonDown;
-(void)menuButtonUp;
-(void)screenOff;
-(void)screenOn;
-(void)significantUserInteractionOccurred;


@end


#endif