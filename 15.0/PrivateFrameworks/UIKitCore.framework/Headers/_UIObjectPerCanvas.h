// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIOBJECTPERCANVAS_H
#define _UIOBJECTPERCANVAS_H


#import <Foundation/Foundation.h>


@interface _UIObjectPerCanvas : NSObject



+(id)objectOfClass:(Class)arg0 forCanvas:(id)arg1 withOptions:(id)arg2 createIfNecessary:(BOOL)arg3 ;
+(void)canvasDisconnected:(id)arg0 ;
+(void)removeObject:(id)arg0 ;
+(void)removeObjectsOfClass:(Class)arg0 ;


@end


#endif