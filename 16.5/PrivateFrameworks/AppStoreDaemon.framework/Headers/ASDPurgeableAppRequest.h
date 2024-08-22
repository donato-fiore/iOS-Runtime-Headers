// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDPURGEABLEAPPREQUEST_H
#define ASDPURGEABLEAPPREQUEST_H



#import "ASDEphemeralRequest.h"
#import "ASDPurgeableAppRequestOptions.h"

@interface ASDPurgeableAppRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPurgeableAppRequestOptions *options;


+(NSInteger)requestType;
-(id)initWithOptions:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif