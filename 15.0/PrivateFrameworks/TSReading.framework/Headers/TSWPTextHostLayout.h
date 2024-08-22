// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTEXTHOSTLAYOUT_H
#define TSWPTEXTHOSTLAYOUT_H

@class NSString;
@protocol TSWPTextEditingHostLayout;


#import "TSDDrawableLayout.h"
#import "TSWPShapeInfo.h"
#import "TSWPShapeLayout.h"

@interface TSWPTextHostLayout : TSDDrawableLayout <TSWPTextEditingHostLayout>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSWPShapeInfo *editingShape; // ivar: _editingShapeInfo
@property (readonly, nonatomic) TSWPShapeLayout *editingShapeLayout; // ivar: _editingShapeLayout
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;
-(void)updateChildrenFromInfo;


@end


#endif