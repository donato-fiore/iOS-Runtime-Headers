// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCONNECTIONSPREDICTIONSTORE_H
#define PPCONNECTIONSPREDICTIONSTORE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PPConnectionsParameters.h"
#import "PPConnectionsPasteboardSource.h"
#import "PPConnectionsCalendarSource.h"
#import "PPConnectionsDuetSource.h"
#import "PPConnectionsNamedEntitySource.h"
#import "PPConnectionsFoundInAppsSource.h"
#import "PPConnectionsMetricsTracker.h"

@interface PPConnectionsPredictionStore : NSObject {
    PPConnectionsParameters *_parameters;
    PPConnectionsPasteboardSource *_pasteboardSource;
    PPConnectionsCalendarSource *_calendarSource;
    PPConnectionsDuetSource *_duetSource;
    PPConnectionsNamedEntitySource *_namedEntitySource;
    PPConnectionsFoundInAppsSource *_fiaSource;
    PPConnectionsMetricsTracker *_metricsTracker;
    NSObject<OS_dispatch_queue> *_predictionQueue;
}




+(id)defaultStore;
-(id)init;
-(id)initWithParameters:(id)arg0 pasteboardSource:(id)arg1 calendarSource:(id)arg2 duetSource:(id)arg3 namedEntitySource:(id)arg4 fiaSource:(id)arg5 metricsTracker:(id)arg6 ;
-(id)recentLocationsForConsumer:(NSUInteger)arg0 criteria:(id)arg1 limit:(NSUInteger)arg2 explanationSet:(id)arg3 timeout:(NSUInteger)arg4 error:(*id)arg5 ;


@end


#endif