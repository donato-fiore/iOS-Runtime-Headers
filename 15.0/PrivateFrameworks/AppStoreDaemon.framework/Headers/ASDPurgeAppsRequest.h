// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDPURGEAPPSREQUEST_H
#define ASDPURGEAPPSREQUEST_H



#import "ASDEphemeralRequest.h"
#import "ASDPurgeAppsRequestOptions.h"

@interface ASDPurgeAppsRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPurgeAppsRequestOptions *options;


+(NSInteger)requestType;
-(id)initWithOptions:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif