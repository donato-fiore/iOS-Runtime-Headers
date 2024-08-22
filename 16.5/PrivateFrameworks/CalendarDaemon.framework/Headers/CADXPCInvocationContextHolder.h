// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADXPCINVOCATIONCONTEXTHOLDER_H
#define CADXPCINVOCATIONCONTEXTHOLDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CADXPCInvocationContextHolder : NSObject {
    NSMutableArray *_retainedArguments;
}


@property (readonly, nonatomic) id *proxy; // ivar: _proxy


-(void)clear;
-(void)retainProxy:(id)arg0 andArgumentsInInvocation:(id)arg1 ;


@end


#endif