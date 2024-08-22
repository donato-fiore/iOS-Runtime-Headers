// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSONCEANDONLYONCEHANDLER_H
#define VSONCEANDONLYONCEHANDLER_H


#import <Foundation/Foundation.h>


@interface VSOnceAndOnlyOnceHandler : NSObject {
    int _counter;
}


@property (copy, nonatomic) id *block; // ivar: _block


-(void)dealloc;
-(void)invoke;


@end


#endif