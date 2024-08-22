// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSONBOARDINGINFOCENTER_H
#define VSONBOARDINGINFOCENTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VSOnboardingInfoCenter : NSObject

@property (readonly, copy, nonatomic) NSString *localizedButtonTitle;


-(id)tvAppPrivacyButtonViewController;
-(id)tvProviderPrivacyButtonViewController;
-(void)presentDetailsFromViewController:(id)arg0 ;


@end


#endif