// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFLOWLAYOUTITEM_H
#define _UIFLOWLAYOUTITEM_H


#import <Foundation/Foundation.h>

#import "_UIFlowLayoutRow.h"
#import "_UIFlowLayoutSection.h"

@interface _UIFlowLayoutItem : NSObject {
    ? _itemFlags;
}


@property (nonatomic) CGRect itemFrame; // ivar: _itemFrame
@property (nonatomic, getter=isPositionEstimated) BOOL positionEstimated;
@property (weak, nonatomic) _UIFlowLayoutRow *rowObject; // ivar: _rowObject
@property (weak, nonatomic) _UIFlowLayoutSection *section; // ivar: _section
@property (nonatomic, getter=isSizeEstimated) BOOL sizeEstimated;
@property (nonatomic) BOOL sizeHasBeenSet;


-(id)copy;


@end


#endif