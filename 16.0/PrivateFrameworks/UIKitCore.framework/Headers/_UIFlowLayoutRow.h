// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFLOWLAYOUTROW_H
#define _UIFLOWLAYOUTROW_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "_UIFlowLayoutSection.h"

@interface _UIFlowLayoutRow : NSObject {
    BOOL _isValid;
    BOOL _complete;
    int _verticalAlignement;
    int _horizontalAlignement;
    BOOL _fixedItemSize;
    _UIFlowLayoutSection *_section;
    NSInteger _index;
    NSMutableArray *_items;
    CGFloat _availableSpace;
    CGSize _rowSize;
    CGRect _rowFrame;
}




-(id)init;


@end


#endif