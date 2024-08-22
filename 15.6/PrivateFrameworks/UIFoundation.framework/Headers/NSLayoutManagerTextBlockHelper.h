// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSLAYOUTMANAGERTEXTBLOCKHELPER_H
#define NSLAYOUTMANAGERTEXTBLOCKHELPER_H


#import <Foundation/Foundation.h>

#import "NSTextBlock.h"

@interface NSLayoutManagerTextBlockHelper : NSObject {
    NSTextBlock *_block;
    CGRect _layoutRect;
    CGRect _boundsRect;
}




-(id)initWithTextBlock:(id)arg0 layoutRect:(struct CGRect )arg1 boundsRect:(struct CGRect )arg2 ;
-(void)dealloc;


@end


#endif