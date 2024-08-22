// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICBRICKTEXTATTACHMENTVIEW_H
#define ICBRICKTEXTATTACHMENTVIEW_H

@class ICAttachmentBrickView;


#import "ICAttachmentView.h"

@interface ICBrickTextAttachmentView : ICAttachmentView

@property (retain, nonatomic) ICAttachmentBrickView *attachmentBrickView; // ivar: _attachmentBrickView


-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)accessibilityUserInputLabels;
-(id)accessibilityValue;
-(id)quickLookTransitionView;
-(struct CGSize )attachmentSizeForTextContainer:(id)arg0 ;
-(void)dealloc;
-(void)didChangeAttachment;
-(void)didChangeAttachmentTitle;
-(void)requestAttachmentContentUpdate;
-(void)setHighlightColor:(id)arg0 ;
-(void)setHighlightPatternRegex:(id)arg0 ;
-(void)setInsideSystemPaper:(BOOL)arg0 ;
-(void)setupConstraints;
-(void)sharedInit:(BOOL)arg0 ;
-(void)updateCornerRadius;


@end


#endif