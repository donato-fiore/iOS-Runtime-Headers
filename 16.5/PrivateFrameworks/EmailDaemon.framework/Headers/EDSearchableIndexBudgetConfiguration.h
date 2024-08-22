// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDSEARCHABLEINDEXBUDGETCONFIGURATION_H
#define EDSEARCHABLEINDEXBUDGETCONFIGURATION_H

@class NSString;
@protocol EFPubliclyDescribable;

#import <Foundation/Foundation.h>


@interface EDSearchableIndexBudgetConfiguration : NSObject <EFPubliclyDescribable>



@property (nonatomic) BOOL allowBacklogIndexingOnPower; // ivar: _allowBacklogIndexingOnPower
@property (nonatomic) BOOL autoStartMaintenanceIndexing; // ivar: _autoStartMaintenanceIndexing
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (nonatomic) BOOL enableActivityBasedScheduling; // ivar: _enableActivityBasedScheduling
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfItemsToIndexOnResume; // ivar: _numberOfItemsToIndexOnResume
@property (readonly, nonatomic) CGFloat periodDuration; // ivar: _periodDuration
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat time; // ivar: _time


+(id)defaultConfiguration;
+(id)nonSchedulingBudgetConfiguration;
-(id)init;
-(id)initWithTime:(CGFloat)arg0 periodDuration:(CGFloat)arg1 numberOfItemsToIndexOnResume:(NSInteger)arg2 ;
-(id)initWithTime:(CGFloat)arg0 periodDuration:(CGFloat)arg1 numberOfItemsToIndexOnResume:(NSInteger)arg2 enableActivityBasedScheduling:(BOOL)arg3 autoStartMaintenanceIndexing:(BOOL)arg4 allowBacklogIndexingOnPower:(BOOL)arg5 ;


@end


#endif