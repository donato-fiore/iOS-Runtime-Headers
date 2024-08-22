// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ILIFEDEBUG_H
#define ILIFEDEBUG_H


#import <Foundation/Foundation.h>


@interface iLifeDebug : NSObject



+(BOOL)handledAsDebugAssertBehaviorURL:(id)arg0 ;
+(id)debugAssertBehaviorFilePath;
+(void)drawBorder:(struct CGRect )arg0 withColor:(id)arg1 ;
+(void)drawViewBorder:(id)arg0 withColor:(id)arg1 ;
+(void)evaluateDebugAssertBehaviorSettings;
+(void)loadOnce;
+(void)readDebugAssertBehaviorFromDisk;
+(void)removeDebugAssertBehaviorFile;
+(void)writeDebugAssertBehaviorStringToDisk:(id)arg0 ;
+(void)writeDebugAssertBehaviorValueToDisk:(int)arg0 ;


@end


#endif