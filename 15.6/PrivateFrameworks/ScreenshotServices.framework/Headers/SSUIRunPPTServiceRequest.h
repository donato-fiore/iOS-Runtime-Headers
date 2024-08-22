// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSUIRUNPPTSERVICEREQUEST_H
#define SSUIRUNPPTSERVICEREQUEST_H

@class NSString;


#import "SSUIServiceRequest.h"

@interface SSUIRunPPTServiceRequest : SSUIServiceRequest

@property (nonatomic) NSUInteger numberOfRequiredScreenshots; // ivar: _numberOfRequiredScreenshots
@property (copy, nonatomic) NSString *testName; // ivar: _testName


+(id)entitlement;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif