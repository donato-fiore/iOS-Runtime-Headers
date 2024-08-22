// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFASSERTIONPOLICYUNITTEST_H
#define PFASSERTIONPOLICYUNITTEST_H

@class NSString;
@protocol PFAssertionPolicyHandler;

#import <Foundation/Foundation.h>


@interface PFAssertionPolicyUnitTest : NSObject <PFAssertionPolicyHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)notifyAssertion:(id)arg0 ;


@end


#endif