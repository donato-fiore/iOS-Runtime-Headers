// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFANNOTATIONPOINTERTRACKINGVIEW_H
#define PDFANNOTATIONPOINTERTRACKINGVIEW_H

@class UIView, NSString;
@protocol UIPointerInteractionDelegate;


#import "PDFAnnotation.h"

@interface PDFAnnotationPointerTrackingView : UIView <UIPointerInteractionDelegate>



@property (readonly, nonatomic) PDFAnnotation *annotation; // ivar: _annotation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 annotation:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;


@end


#endif