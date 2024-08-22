// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWLOADINGPOLICYPROVIDER_H
#define SWLOADINGPOLICYPROVIDER_H

@class NSString;
@protocol SWLoadingPolicyProvider;

#import <Foundation/Foundation.h>


@interface SWLoadingPolicyProvider : NSObject <SWLoadingPolicyProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)loadingPolicy;


@end


#endif