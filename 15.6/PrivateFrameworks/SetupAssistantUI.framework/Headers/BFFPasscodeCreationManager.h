// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BFFPASSCODECREATIONMANAGER_H
#define BFFPASSCODECREATIONMANAGER_H

@class NSString;
@protocol BFFPasscodeCreationDelegate;

#import <Foundation/Foundation.h>


@interface BFFPasscodeCreationManager : NSObject

@property (nonatomic) BOOL acceptedWeakPasscode; // ivar: _acceptedWeakPasscode
@property (copy, nonatomic) NSString *constraintFailedInstructions; // ivar: _constraintFailedInstructions
@property (readonly, nonatomic) NSString *constraintInstructions;
@property (weak, nonatomic) NSObject<BFFPasscodeCreationDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isNumericPasscodeEntry) BOOL numericPasscodeEntry; // ivar: _numericPasscodeEntry
@property (copy, nonatomic) NSString *passcode; // ivar: _passcode
@property (nonatomic) NSUInteger passcodeState; // ivar: _passcodeState
@property (nonatomic) NSInteger simplePasscodeEntryLength; // ivar: _simplePasscodeEntryLength


+(id)sharedPasscodeManager;
-(BOOL)isSimplePasscodeEntry;
-(id)_mainQueue;
-(id)init;
-(void)_applyPasscode;
-(void)acceptWeakPasscode:(BOOL)arg0 ;
-(void)reset;
-(void)transitionToNextPasscodeStateForInput:(id)arg0 ;


@end


#endif