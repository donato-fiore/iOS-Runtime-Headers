// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICPENCILKITATTACHMENTRESIZEHANDLEACCESSIBILITYELEMENT_H
#define ICPENCILKITATTACHMENTRESIZEHANDLEACCESSIBILITYELEMENT_H

@class UIAccessibilityElement, UIView;


#import "ICPencilKitAttachmentAccessibilityElement.h"

@interface ICPencilKitAttachmentResizeHandleAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) ICPencilKitAttachmentAccessibilityElement *attachmentElement; // ivar: _attachmentElement
@property (weak, nonatomic) UIView *drawingResizeView; // ivar: _drawingResizeView
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL top;


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityContainer;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)initWithAttachmentAccessibilityElement:(id)arg0 drawingResizeView:(id)arg1 ;
-(struct CGPoint )accessibilityActivationPoint;
-(struct CGRect )accessibilityFrame;


@end


#endif