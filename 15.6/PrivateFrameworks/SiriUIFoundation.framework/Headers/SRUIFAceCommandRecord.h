// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRUIFACECOMMANDRECORD_H
#define SRUIFACECOMMANDRECORD_H

@protocol SAAceCommand, SRUIFAceCommandRecordDelegate;

#import <Foundation/Foundation.h>


@interface SRUIFAceCommandRecord : NSObject

@property (readonly, nonatomic) NSObject<SAAceCommand> *aceCommand; // ivar: _aceCommand
@property (copy, nonatomic) id *commandCompletion; // ivar: _commandCompletion
@property (weak, nonatomic) NSObject<SRUIFAceCommandRecordDelegate> *delegate; // ivar: _delegate
@property (nonatomic, setter=_setNumberOfStartedActions:) NSInteger numberOfStartedActions; // ivar: _numberOfStartedActions
@property (nonatomic, setter=_setNumberOfStoppedActions:) NSInteger numberOfStoppedActions; // ivar: _numberOfStoppedActions
@property (nonatomic, setter=_setNumberOfSuccessfullyCompletedActions:) NSInteger numberOfSuccessfullyCompletedActions; // ivar: _numberOfSuccessfullyCompletedActions
@property (nonatomic, setter=_setNumberOfUnsuccessfullyCompletedActions:) NSInteger numberOfUnsuccessfullyCompletedActions; // ivar: _numberOfUnsuccessfullyCompletedActions
@property (nonatomic, setter=_setResult:) NSInteger result; // ivar: _result


-(id)initWithAceCommand:(id)arg0 andCompletion:(id)arg1 ;
-(void)incrementNumberOfStartedActions;
-(void)incrementNumberOfStoppedActions;
-(void)incrementNumberOfSuccessfullyCompletedActions;
-(void)incrementNumberOfUnsuccessfullyCompletedActions;


@end


#endif