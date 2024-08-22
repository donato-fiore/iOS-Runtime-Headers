// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIBLOCKANIMATIONDELEGATE_H
#define SKUIBLOCKANIMATIONDELEGATE_H


#import <Foundation/Foundation.h>


@interface SKUIBlockAnimationDelegate : NSObject {
    id *_block;
}




-(id)initWithCompletionHandler:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif