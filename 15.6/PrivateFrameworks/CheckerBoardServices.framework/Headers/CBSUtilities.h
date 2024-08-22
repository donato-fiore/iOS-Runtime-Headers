// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBSUTILITIES_H
#define CBSUTILITIES_H


#import <Foundation/Foundation.h>


@interface CBSUtilities : NSObject



+(BOOL)_currentProcessHasEntitlement:(id)arg0 ;
+(BOOL)isCheckerBoardActive;
+(BOOL)rebootToCheckerBoard;
+(id)proxyServer;
+(void)dimDisplay;
+(void)disableNetworkReconnect;
+(void)enableNetworkReconnect;
+(void)exitCheckerBoard;
+(void)hideSceneStatusBar;
+(void)sceneStatusBarStyle:(NSInteger)arg0 ;
+(void)showSceneStatusBar;
+(void)undimDisplay;


@end


#endif