// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFASSERTIONPOLICYTHROWALWAYS_H
#define PFASSERTIONPOLICYTHROWALWAYS_H

@class NSString;
@protocol PFAssertionPolicyHandler;

#import <Foundation/Foundation.h>


@interface PFAssertionPolicyThrowAlways : NSObject <PFAssertionPolicyHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)notifyAssertion:(id)arg0 ;


@end


#endif