// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKREPORTMANAGER_H
#define DKREPORTMANAGER_H

@class NSArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DKExtensionDiscovery.h"
#import "DKReportPlanner.h"
#import "DKReporterRegistry.h"

@interface DKReportManager : NSObject

@property (copy, nonatomic) NSArray *availableReportGenerators; // ivar: _availableReportGenerators
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) DKExtensionDiscovery *discovery; // ivar: _discovery
@property (retain, nonatomic) DKReportPlanner *planner; // ivar: _planner
@property (retain, nonatomic) DKReporterRegistry *registry; // ivar: _registry
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportManagerQueue; // ivar: _reportManagerQueue


-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)sendRequestsForGroup:(id)arg0 concurrent:(BOOL)arg1 failOnError:(BOOL)arg2 error:(*id)arg3 ;
-(void)cancelAllReports;
-(void)reportWithComponentPredicateManifest:(id)arg0 completion:(id)arg1 ;
-(void)reportersWithCompletion:(id)arg0 ;


@end


#endif