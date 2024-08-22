// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDRESTOREDEMOTEDAPPLICATIONSREQUEST_H
#define ASDRESTOREDEMOTEDAPPLICATIONSREQUEST_H



#import "ASDEphemeralRequest.h"
#import "ASDRestoreDemotedApplicationsRequestOptions.h"

@interface ASDRestoreDemotedApplicationsRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDRestoreDemotedApplicationsRequestOptions *options;


+(NSInteger)requestType;
-(id)initWithOptions:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif