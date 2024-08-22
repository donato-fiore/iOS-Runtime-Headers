// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKREPORTPLANNER_H
#define DKREPORTPLANNER_H


#import <Foundation/Foundation.h>

#import "DKReporterRegistry.h"

@interface DKReportPlanner : NSObject

@property (retain, nonatomic) DKReporterRegistry *registry; // ivar: _registry


+(id)plannerWithReportGeneratorRegistry:(id)arg0 ;
-(id)_resolveComponentIdentityManifest:(id)arg0 ;
-(id)initWithReportGeneratorRegistry:(id)arg0 ;
-(id)requestGroupsForPredicateManifest:(id)arg0 ;


@end


#endif