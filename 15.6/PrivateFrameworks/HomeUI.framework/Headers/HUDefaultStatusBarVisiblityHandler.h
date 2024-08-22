// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUDEFAULTSTATUSBARVISIBLITYHANDLER_H
#define HUDEFAULTSTATUSBARVISIBLITYHANDLER_H

@class NSString;
@protocol HUStatusBarVisibilityHandling;

#import <Foundation/Foundation.h>


@interface HUDefaultStatusBarVisiblityHandler : NSObject <HUStatusBarVisibilityHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
@property (readonly) Class superclass;


-(id)_statusBarAnimationParametersForAnimationSettings:(id)arg0 ;


@end


#endif