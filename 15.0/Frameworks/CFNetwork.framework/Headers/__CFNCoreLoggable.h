// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __CFNCORELOGGABLE_H
#define __CFNCORELOGGABLE_H

@protocol __CFNCoreLoggableReq;

#import <Foundation/Foundation.h>


@interface __CFNCoreLoggable : NSObject <__CFNCoreLoggableReq>

 {
    *CoreLoggable _loggable;
}




-(id)initWithLoggableName:(char *)arg0 ;
-(struct CoreLoggable *)loggable;
-(void)dealloc;


@end


#endif