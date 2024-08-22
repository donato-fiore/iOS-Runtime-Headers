// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSAMPLEQUERYSERVER_H
#define HDSAMPLEQUERYSERVER_H

@class NSArray;


#import "HDBatchedQueryServer.h"

@interface HDSampleQueryServer : HDBatchedQueryServer {
    BOOL _suspended;
    BOOL _includeAutomaticTimeZones;
    BOOL _includeContributorInformation;
    NSUInteger _limit;
    NSArray *_sortDescriptors;
    NSArray *_queryDescriptors;
}




+(BOOL)supportsAnchorBasedAuthorization;
+(Class)queryClass;
+(id)requiredEntitlements;
-(BOOL)validateConfiguration:(*id)arg0 ;
-(id)diagnosticDescription;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)objectTypes;
-(void)_queue_start;


@end


#endif