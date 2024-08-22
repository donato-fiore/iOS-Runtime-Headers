// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICPDFATTACHMENTRENDEROPERATION_H
#define ICPDFATTACHMENTRENDEROPERATION_H

@class NSOperation, ICAttachment;


#import "ICPDFAttachmentView.h"

@interface ICPDFAttachmentRenderOperation : NSOperation

@property (readonly, weak) ICAttachment *attachment; // ivar: _attachment
@property CGFloat scale; // ivar: _scale
@property CGSize size; // ivar: _size
@property (weak) ICPDFAttachmentView *view; // ivar: _view
@property (readonly) CGFloat width; // ivar: _width


+(id)renderedImageForPage:(struct CGPDFPage *)arg0 scale:(CGFloat)arg1 size:(struct CGSize )arg2 colorSpace:(struct CGColorSpace *)arg3 ;
-(id)generateImageForPrinting;
-(id)initWithView:(id)arg0 ;
-(void)main;


@end


#endif