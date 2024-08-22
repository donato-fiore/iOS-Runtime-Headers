// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPURLDRAGITEM_H
#define TSWPURLDRAGITEM_H



#import "TSWPDragItem.h"

@interface TSWPURLDragItem : TSWPDragItem

@property (readonly, nonatomic) CGPoint canvasDragPoint; // ivar: _canvasDragPoint
@property (readonly, nonatomic) _NSRange range; // ivar: _range


-(id)initWithDragPreview:(id)arg0 canvasRect:(struct CGRect )arg1 canvasDragPoint:(struct CGPoint )arg2 range:(struct _NSRange )arg3 ;
-(id)retargetedDragPreviewForDefaultTargetedDragPreview:(id)arg0 icc:(id)arg1 canvasView:(id)arg2 boundsRect:(struct CGRect )arg3 ;


@end


#endif