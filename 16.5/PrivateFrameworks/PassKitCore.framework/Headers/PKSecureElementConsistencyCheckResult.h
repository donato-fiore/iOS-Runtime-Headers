// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSECUREELEMENTCONSISTENCYCHECKRESULT_H
#define PKSECUREELEMENTCONSISTENCYCHECKRESULT_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface PKSecureElementConsistencyCheckResult : NSObject

@property (readonly, nonatomic) NSInteger cleanupActions; // ivar: _cleanupActions
@property (readonly, nonatomic) NSArray *registerRegions; // ivar: _registerRegions
@property (readonly, nonatomic) NSArray *requestedActions; // ivar: _requestedActions
@property (readonly, nonatomic) NSDictionary *summary; // ivar: _summary


-(id)description;
-(id)initWithCleanupActions:(NSInteger)arg0 resultsSummary:(id)arg1 requestedActions:(id)arg2 registeredRegions:(id)arg3 ;


@end


#endif