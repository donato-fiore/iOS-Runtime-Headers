// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSONBOARDINGUTIL_H
#define MSONBOARDINGUTIL_H


#import <Foundation/Foundation.h>


@interface MSOnboardingUtil : NSObject



+(BOOL)shouldShowOnboarding;
+(id)viewControllerForMediaType:(NSInteger)arg0 completion:(id)arg1 ;
+(void)markAsShown;
+(void)presentIfNeededFromViewController:(id)arg0 mediaTypes:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif