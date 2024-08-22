// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDCATEGORYSUBSYSTEM_H
#define EDCATEGORYSUBSYSTEM_H


#import <Foundation/Foundation.h>

#import "EDBiomeInteractionEventLog.h"
#import "EDDifferentialPrivacyReporter.h"
#import "EDInteractionLogger.h"
#import "EDPETInteractionEventLog.h"

@interface EDCategorySubsystem : NSObject

@property (readonly, nonatomic) EDBiomeInteractionEventLog *biomeLog; // ivar: _biomeLog
@property (readonly, nonatomic) EDDifferentialPrivacyReporter *differentialPrivacyReporter; // ivar: _differentialPrivacyReporter
@property (readonly, nonatomic) EDInteractionLogger *interactionLogger; // ivar: _interactionLogger
@property (readonly, nonatomic) EDPETInteractionEventLog *petLog; // ivar: _petLog


-(id)initWithPersistence:(id)arg0 userProfileProvider:(id)arg1 vipManager:(id)arg2 sourceApplicationBundleIdentifier:(id)arg3 ;
-(void)_schedulePETSubmissionActivityForLog:(id)arg0 ;
-(void)scheduleRecurringActivity;


@end


#endif