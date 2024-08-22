// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCFRAMEWORKINITIALIZATION_H
#define GCFRAMEWORKINITIALIZATION_H


#import <Foundation/Foundation.h>


@interface GCFrameworkInitialization : NSObject



+(id)initOperationQueue;
+(id)initQueue;
+(void)controllerManagerDidOpen;
+(void)enableControllerSupportWithReason:(NSInteger)arg0 ;
+(void)enableKeyboardAndMouseSupportServerSide;
+(void)enableKeyboardSupportWithReason:(NSInteger)arg0 ;
+(void)enableMouseSupportWithReason:(NSInteger)arg0 ;
+(void)initializeFramework;
+(void)listenForObservers;


@end


#endif