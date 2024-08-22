// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXMEDIASHARINGPOLICYPROVIDER_H
#define SXMEDIASHARINGPOLICYPROVIDER_H

@class NSString;
@protocol SXMediaSharingPolicyProvider;

#import <Foundation/Foundation.h>


@interface SXMediaSharingPolicyProvider : NSObject <SXMediaSharingPolicyProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger mediaSharingPolicy;
@property (readonly) Class superclass;




@end


#endif