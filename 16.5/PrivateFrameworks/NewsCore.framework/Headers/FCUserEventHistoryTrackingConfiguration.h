// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCUSEREVENTHISTORYTRACKINGCONFIGURATION_H
#define FCUSEREVENTHISTORYTRACKINGCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FCUserEventHistoryPruningPolicies.h"

@interface FCUserEventHistoryTrackingConfiguration : NSObject

@property (retain, nonatomic) FCUserEventHistoryPruningPolicies *pruningPolicies; // ivar: _pruningPolicies


-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif