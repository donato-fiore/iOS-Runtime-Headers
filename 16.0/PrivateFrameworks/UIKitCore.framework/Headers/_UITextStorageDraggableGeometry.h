// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTSTORAGEDRAGGABLEGEOMETRY_H
#define _UITEXTSTORAGEDRAGGABLEGEOMETRY_H

@class NSString, NSTextStorage, UIView<UITextDragSupporting>;
@protocol UITextDraggableGeometry, UITextDraggableGeometryFastSameViewOperationsSupporting;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UITextStorageDraggableGeometry : NSObject <UITextDraggableGeometry, UITextDraggableGeometryFastSameViewOperationsSupporting>

 {
    UIColor *_previousBackgroundColor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger geometryOptions; // ivar: _geometryOptions
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSTextStorage *textStorage; // ivar: _textStorage
@property (readonly, weak, nonatomic) UIView<UITextDragSupporting> *view; // ivar: _view


-(BOOL)_isActualLink:(id)arg0 ;
-(id)_draggableTextInRange:(id)arg0 ;
-(id)_previewProviderForTextInRange:(SEL)arg0 ;
-(id)_targetedPreviewProviderForImage:(SEL)arg0 inRange:(id)arg1 ;
-(id)_targetedPreviewProviderForTextInRange:(SEL)arg0 ;
-(id)_targetedPreviewProviderForTextInRange:(SEL)arg0 dismissing:(id)arg1 overrideLifting:(BOOL)arg2 ;
-(id)attributedStringsForTextRanges:(id)arg0 ;
-(id)draggableObjectsForTextRange:(id)arg0 ;
-(id)initWithView:(id)arg0 textStorage:(id)arg1 ;
-(id)performSameViewDropOperation:(id)arg0 ;
-(id)previewForDroppingTextInRange:(id)arg0 toPosition:(id)arg1 inContainerView:(id)arg2 ;
-(id)targetedPreviewProviderForTextInRange:(SEL)arg0 dismissing:(id)arg1 ;
-(id)textRangeForAttachmentInTextRange:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(id)textRangesForAttachmentsInTextRange:(id)arg0 ;
-(void)_renderTextInRange:(id)arg0 image:(*id)arg1 boundingRectangles:(*id)arg2 forLifting:(BOOL)arg3 ;


@end


#endif