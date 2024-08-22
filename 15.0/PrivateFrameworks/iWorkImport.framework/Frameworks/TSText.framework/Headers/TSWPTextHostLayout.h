// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTEXTHOSTLAYOUT_H
#define TSWPTEXTHOSTLAYOUT_H

@class TSDDrawableLayout;


#import "TSWPShapeInfo.h"
#import "TSWPShapeLayout.h"

@interface TSWPTextHostLayout : TSDDrawableLayout {
    TSWPShapeInfo *_editingShapeInfo;
}


@property (readonly, nonatomic) TSWPShapeLayout *editingShapeLayout; // ivar: _editingShapeLayout


-(void)dealloc;
-(void)updateChildrenFromInfo;


@end


#endif