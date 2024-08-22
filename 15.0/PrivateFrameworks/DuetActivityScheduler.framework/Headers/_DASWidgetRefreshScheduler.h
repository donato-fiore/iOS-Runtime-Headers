// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DASWIDGETREFRESHSCHEDULER_H
#define _DASWIDGETREFRESHSCHEDULER_H

@class _CDContextualKeyPath;
@protocol _CDLocalContext, OS_os_log, OS_dispatch_queue, _DKKnowledgeSaving;

#import <Foundation/Foundation.h>

#import "_DASScheduler.h"

@interface _DASWidgetRefreshScheduler : NSObject

@property (retain, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context
@property (retain, nonatomic) _DASScheduler *dasScheduler; // ivar: _dasScheduler
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<_DKKnowledgeSaving> *store; // ivar: _store
@property (retain, nonatomic) _CDContextualKeyPath *widgetOverrideKeypath; // ivar: _widgetOverrideKeypath


+(id)sharedScheduler;
-(id)createRefreshActivityForWidgetBudgetID:(id)arg0 containingAppID:(id)arg1 refreshAfter:(id)arg2 refreshBefore:(id)arg3 widgetInfo:(id)arg4 refreshHandler:(id)arg5 ;
-(id)createRefreshActivityForWidgetID:(id)arg0 containingAppID:(id)arg1 refreshAfter:(id)arg2 refreshBefore:(id)arg3 widgetInfo:(id)arg4 refreshHandler:(id)arg5 ;
-(id)decrementBudgetForWidgetID:(id)arg0 by:(CGFloat)arg1 ;
-(id)init;
-(void)cancelActivity:(id)arg0 ;
-(void)recordWidgetRefreshes:(id)arg0 ;
-(void)recordWidgetViews:(id)arg0 ;
-(void)setBudget:(id)arg0 ;
-(void)setOverridesForWidgetBudgetIDs:(id)arg0 ;
-(void)setOverridesForWidgetIDs:(id)arg0 ;
-(void)setSystemAddedWidgetBudgetIDs:(id)arg0 ;
-(void)submitRefreshActivity:(id)arg0 ;


@end


#endif