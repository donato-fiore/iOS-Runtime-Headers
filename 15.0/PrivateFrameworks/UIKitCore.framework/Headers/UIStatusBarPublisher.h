// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTATUSBARPUBLISHER_H
#define UISTATUSBARPUBLISHER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface UIStatusBarPublisher : NSObject {
    *__CFMachPort _machPort;
    NSUInteger _styleOverrides;
    NSMutableSet *_statusBarItems;
}




-(NSUInteger)addStyleOverrides:(NSUInteger)arg0 ;
-(NSUInteger)removeStyleOverrides:(NSUInteger)arg0 ;
-(NSUInteger)styleOverrides;
-(id)initWithCFMachPort:(struct __CFMachPort *)arg0 ;
-(id)statusBarItems;
-(unsigned int)publisherPort;
-(void)addStatusBarItem:(int)arg0 ;
-(void)dealloc;
-(void)removeStatusBarItem:(int)arg0 ;


@end


#endif