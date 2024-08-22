// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFLOCALACTIONREPLAYHANDLER_H
#define MFLOCALACTIONREPLAYHANDLER_H

@class NSMutableArray, NSString;
@protocol EFLoggable, EFPubliclyDescribable, EFScheduler;

#import <Foundation/Foundation.h>

#import "MailAccount.h"
#import "MFMailMessageLibrary.h"

@interface MFLocalActionReplayHandler : NSObject <EFLoggable, EFPubliclyDescribable>



@property (weak, nonatomic) MailAccount *account; // ivar: _account
@property (retain, nonatomic) NSMutableArray *actionsToReplay; // ivar: _actionsToReplay
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MFMailMessageLibrary *library; // ivar: _library
@property (nonatomic) BOOL needToCheckForNewActions; // ivar: _needToCheckForNewActions
@property (readonly, nonatomic) NSObject<EFScheduler> *replayScheduler; // ivar: _replayScheduler
@property BOOL replayingActions; // ivar: _replayingActions
@property (readonly) Class superclass;


+(id)log;
-(id)initWithLibrary:(id)arg0 account:(id)arg1 ;
-(void)_checkForNewActions;
-(void)_replayAllActions;
-(void)addNewAction:(id)arg0 ;
-(void)connectionEstablished;
-(void)newActionsAdded;


@end


#endif