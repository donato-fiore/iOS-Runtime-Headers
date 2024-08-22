// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGFENCE_H
#define PXGFENCE_H


#import <Foundation/Foundation.h>

#import "PXGLayout.h"

@interface PXGFence : NSObject

@property (readonly, weak, nonatomic) PXGLayout *layout; // ivar: _layout
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)init;
-(id)initWithLayout:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif