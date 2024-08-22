// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICBASEATTACHMENTVIEW_H
#define ICBASEATTACHMENTVIEW_H

@class UIView, ICAttachment, UIColor, NSRegularExpression;


#import "ICTextAttachment.h"

@interface ICBaseAttachmentView : UIView

@property (retain, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (nonatomic) CGSize attachmentContentSize; // ivar: _attachmentContentSize
@property (nonatomic) CGFloat foregroundAlpha; // ivar: _foregroundAlpha
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex; // ivar: _highlightPatternRegex
@property (nonatomic) BOOL selected; // ivar: _selected
@property (weak, nonatomic) ICTextAttachment *textAttachment; // ivar: _textAttachment


-(BOOL)cancelDidScrollIntoVisibleRange;
-(id)quickLookTransitionView;
-(void)addKVObserversForAttachment:(id)arg0 ;
-(void)attachmentDidChangeSize:(id)arg0 ;
-(void)attachmentDidLoad:(id)arg0 ;
-(void)attachmentPreviewImagesDidUpdate:(id)arg0 ;
-(void)attachmentWillBeDeleted:(id)arg0 ;
-(void)contentSizeCategoryDidChange;
-(void)dealloc;
-(void)didChangeAttachment;
-(void)didChangeAttachmentTitle;
-(void)didChangeMedia;
-(void)didChangeMergeableData;
-(void)didChangeSize;
-(void)didScrollIntoVisibleRange;
-(void)didScrollOutOfVisibleRange;
-(void)didUpdatePreviewImages;
-(void)mediaDidLoad:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeKVOObserversForAttachment:(id)arg0 ;
-(void)updateHighlights;
-(void)willChangeAttachment;
-(void)willDeleteAttachment;


@end


#endif