// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCUSEREVENTHISTORYTRACKINGCONFIGURATION_H
#define FCUSEREVENTHISTORYTRACKINGCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FCUserEventHistoryPruningPolicies.h"

@interface FCUserEventHistoryTrackingConfiguration : NSObject

@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) FCUserEventHistoryPruningPolicies *pruningPolicies; // ivar: _pruningPolicies


-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif