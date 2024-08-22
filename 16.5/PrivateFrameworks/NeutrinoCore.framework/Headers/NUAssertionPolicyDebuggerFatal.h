// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUASSERTIONPOLICYDEBUGGERFATAL_H
#define NUASSERTIONPOLICYDEBUGGERFATAL_H

@class NSString;
@protocol NUAssertionPolicyHandler;

#import <Foundation/Foundation.h>


@interface NUAssertionPolicyDebuggerFatal : NSObject <NUAssertionPolicyHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)notifyAssertion:(id)arg0 ;


@end


#endif