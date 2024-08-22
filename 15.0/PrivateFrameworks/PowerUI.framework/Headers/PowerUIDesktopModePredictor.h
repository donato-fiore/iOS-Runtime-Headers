// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POWERUIDESKTOPMODEPREDICTOR_H
#define POWERUIDESKTOPMODEPREDICTOR_H

@class NSString, MLModel, NSDate;
@protocol PowerUIPredictor, _CDLocalContext, OS_os_log, _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "PowerUITrialManager.h"

@interface PowerUIDesktopModePredictor : NSObject <PowerUIPredictor>



@property (retain, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context
@property (retain, nonatomic) NSString *defaultsDomain; // ivar: _defaultsDomain
@property (nonatomic) CGFloat desktopEntryThreshold; // ivar: _desktopEntryThreshold
@property (nonatomic) os_unfair_lock_s loadModelLock; // ivar: _loadModelLock
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, retain, nonatomic) MLModel *model; // ivar: _model
@property (nonatomic) CGFloat pluginBatteryLevel; // ivar: _pluginBatteryLevel
@property (retain, nonatomic) NSDate *pluginDate; // ivar: _pluginDate
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *store; // ivar: _store
@property (nonatomic) CGFloat threshold; // ivar: _threshold
@property (retain, nonatomic) PowerUITrialManager *trialManager; // ivar: _trialManager


-(id)initWithDefaultsDomain:(id)arg0 withContextStore:(id)arg1 withKnowledgeStore:(id)arg2 withTrialManager:(id)arg3 ;
-(id)predictFullChargeDateWithBatteryLevel:(NSUInteger)arg0 ;


@end


#endif