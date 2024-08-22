// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCBLOCKOPERATIONCONTEXT_H
#define DMCBLOCKOPERATIONCONTEXT_H


#import <Foundation/Foundation.h>

#import "DMCBlockOperation.h"

@interface DMCBlockOperationContext : NSObject

@property (retain, nonatomic) DMCBlockOperation *operation; // ivar: _operation


-(void)endBlockOperation;


@end


#endif