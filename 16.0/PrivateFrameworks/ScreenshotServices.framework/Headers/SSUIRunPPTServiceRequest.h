// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSUIRUNPPTSERVICEREQUEST_H
#define SSUIRUNPPTSERVICEREQUEST_H

@class NSString;


#import "SSUIServiceRequest.h"

@interface SSUIRunPPTServiceRequest : SSUIServiceRequest

@property (nonatomic) NSUInteger numberOfRequiredScreenshots; // ivar: _numberOfRequiredScreenshots
@property (copy, nonatomic) NSString *testName; // ivar: _testName


+(BOOL)supportsBSXPCSecureCoding;
+(id)entitlement;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif