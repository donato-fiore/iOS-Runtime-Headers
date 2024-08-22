// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFLOWLAYOUTITEM_H
#define _UIFLOWLAYOUTITEM_H


#import <Foundation/Foundation.h>

#import "_UIFlowLayoutSection.h"
#import "_UIFlowLayoutRow.h"

@interface _UIFlowLayoutItem : NSObject {
    ? _itemFlags;
    _UIFlowLayoutSection *_section;
    _UIFlowLayoutRow *_rowObject;
    CGRect _itemFrame;
}




-(id)copy;


@end


#endif