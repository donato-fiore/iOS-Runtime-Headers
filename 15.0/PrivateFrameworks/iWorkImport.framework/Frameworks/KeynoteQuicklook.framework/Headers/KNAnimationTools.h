// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNANIMATIONTOOLS_H
#define KNANIMATIONTOOLS_H


#import <Foundation/Foundation.h>


@interface KNAnimationTools : NSObject



+(BOOL)isAnimationEditorConnected;
+(BOOL)isAnimationImageTesterConnected;
+(void)startAnimationToolsIfNecessary;


@end


#endif