// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMBLOCKOPERATIONCONTEXT_H
#define MDMBLOCKOPERATIONCONTEXT_H


#import <Foundation/Foundation.h>

#import "MDMBlockOperation.h"

@interface MDMBlockOperationContext : NSObject

@property (retain, nonatomic) MDMBlockOperation *operation; // ivar: _operation


-(void)endBlockOperation;


@end


#endif