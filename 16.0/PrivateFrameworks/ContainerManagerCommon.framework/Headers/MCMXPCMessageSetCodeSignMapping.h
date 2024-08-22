// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMXPCMESSAGESETCODESIGNMAPPING_H
#define MCMXPCMESSAGESETCODESIGNMAPPING_H

@class NSString;
@protocol MCMParametersSetCodeSignMapping;


#import "MCMXPCMessageWithIdentifierBase.h"

@interface MCMXPCMessageSetCodeSignMapping : MCMXPCMessageWithIdentifierBase <MCMParametersSetCodeSignMapping>



@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id *info; // ivar: _info
@property (readonly, nonatomic) id *options; // ivar: _options


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;


@end


#endif