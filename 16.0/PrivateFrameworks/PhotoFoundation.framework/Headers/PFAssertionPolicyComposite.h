// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFASSERTIONPOLICYCOMPOSITE_H
#define PFASSERTIONPOLICYCOMPOSITE_H

@class NSString, NSArray;
@protocol PFAssertionPolicyHandler;

#import <Foundation/Foundation.h>


@interface PFAssertionPolicyComposite : NSObject <PFAssertionPolicyHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *policies; // ivar: _policies
@property (readonly) Class superclass;


-(id)init;
-(void)addPolicy:(id)arg0 ;
-(void)notifyAssertion:(id)arg0 ;


@end


#endif