// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8PAPERKIT31INLINEDRAWINGTEXTATTACHMENTVIEW_H
#define _TTC8PAPERKIT31INLINEDRAWINGTEXTATTACHMENTVIEW_H

@class PKTextAttachmentDrawingView;
@protocol UIDropInteractionDelegate_Private;



@interface _TtC8PaperKit31InlineDrawingTextAttachmentView : PKTextAttachmentDrawingView <UIDropInteractionDelegate_Private>

 {
    ? dropInteraction;
    ? dropSessionType;
    ? $__lazy_storage_$_acceptedDropLayouts;
}




-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(NSInteger)_dropInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithAttachment:(id)arg0 drawingClass:(Class)arg1 inserted:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 drawing:(id)arg1 ;
-(void)didMoveToWindow;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;


@end


#endif