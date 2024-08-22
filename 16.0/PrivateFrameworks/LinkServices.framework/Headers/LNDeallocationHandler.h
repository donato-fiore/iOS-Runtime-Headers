// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNDEALLOCATIONHANDLER_H
#define LNDEALLOCATIONHANDLER_H


#import <Foundation/Foundation.h>


@interface LNDeallocationHandler : NSObject {
    id *_object;
    id *_deallocationHandler;
}




-(id)initWithObject:(id)arg0 deallocationHandler:(id)arg1 ;
-(void)dealloc;


@end


#endif