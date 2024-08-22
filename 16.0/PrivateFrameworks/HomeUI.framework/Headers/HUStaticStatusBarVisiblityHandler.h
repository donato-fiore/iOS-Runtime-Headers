// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSTATICSTATUSBARVISIBLITYHANDLER_H
#define HUSTATICSTATUSBARVISIBLITYHANDLER_H

@class NSString;
@protocol HUStatusBarVisibilityHandling;

#import <Foundation/Foundation.h>


@interface HUStaticStatusBarVisiblityHandler : NSObject <HUStatusBarVisibilityHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
@property (readonly) Class superclass;




@end


#endif