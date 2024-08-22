// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKREPORTINGCONCURRENTREQUESTGROUP_H
#define DKREPORTINGCONCURRENTREQUESTGROUP_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface DKReportingConcurrentRequestGroup : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestLookupByGenerator; // ivar: _requestLookupByGenerator
@property (retain, nonatomic) NSMutableSet *requests; // ivar: _requests
@property (retain, nonatomic) NSMutableSet *resources; // ivar: _resources


-(BOOL)addComponentIdentity:(id)arg0 usingGenerator:(id)arg1 ;
-(id)init;


@end


#endif