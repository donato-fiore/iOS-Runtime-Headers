// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTATTACHMENTVIEW_H
#define UITEXTATTACHMENTVIEW_H

@class NSTextAttachment, NSString;
@protocol NSTextAttachmentCell;


#import "UIView.h"

@interface UITextAttachmentView : UIView <NSTextAttachmentCell>



@property (weak, nonatomic) NSTextAttachment *attachment; // ivar: _attachment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)contentView;
-(id)initWithContentView:(id)arg0 ;
-(id)initWithTextAttachment:(id)arg0 image:(id)arg1 ;
-(struct CGPoint )cellBaselineOffset;
-(struct CGRect )cellFrameForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;
-(struct CGSize )cellSize;
-(void)drawWithFrame:(struct CGRect )arg0 inView:(id)arg1 characterIndex:(NSUInteger)arg2 ;
-(void)drawWithFrame:(struct CGRect )arg0 inView:(id)arg1 characterIndex:(NSUInteger)arg2 layoutManager:(id)arg3 ;


@end


#endif