// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTDRAGGABLEOBJECT_H
#define UITEXTDRAGGABLEOBJECT_H

@class NSItemProvider;

#import <Foundation/Foundation.h>

#import "UITextRange.h"

@interface UITextDraggableObject : NSObject

@property (retain, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (copy, nonatomic) id *previewProvider; // ivar: _previewProvider
@property (retain, nonatomic) UITextRange *range; // ivar: _range
@property (copy, nonatomic) id *targetedPreviewProvider; // ivar: _targetedPreviewProvider


+(id)draggableObjectWithItemProvider:(id)arg0 fromRange:(id)arg1 ;


@end


#endif