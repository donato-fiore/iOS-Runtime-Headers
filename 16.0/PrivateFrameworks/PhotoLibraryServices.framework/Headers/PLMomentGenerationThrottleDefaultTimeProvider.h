// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLMOMENTGENERATIONTHROTTLEDEFAULTTIMEPROVIDER_H
#define PLMOMENTGENERATIONTHROTTLEDEFAULTTIMEPROVIDER_H

@class NSString;
@protocol PLMomentGenerationThrottleTimeProvider;

#import <Foundation/Foundation.h>


@interface PLMomentGenerationThrottleDefaultTimeProvider : NSObject <PLMomentGenerationThrottleTimeProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)currentTime;


@end


#endif