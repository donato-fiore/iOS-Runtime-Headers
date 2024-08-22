// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAGESTALT_H
#define SAGESTALT_H


#import <Foundation/Foundation.h>


@interface SAGestalt : NSObject



+(BOOL)deviceSupportsKappa;
+(BOOL)inAirplaneMode;
+(BOOL)isInternalBuild;
+(BOOL)isProductionFused;


@end


#endif