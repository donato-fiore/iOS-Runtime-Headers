// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICINLINEATTACHMENTVIEWCONTROLLER_H
#define ICINLINEATTACHMENTVIEWCONTROLLER_H

@class ICInlineAttachment, NSString, NSLayoutManager, NSTextContainer, NSTextStorage, ICInlineTextAttachment;
@protocol ICAttachmentFindable, ICInlineAttachmentViewAnimationDelegate, ICAttachmentViewControllerInitializing;


#import "ICAbstractAttachmentViewController.h"

@interface ICInlineAttachmentViewController : ICAbstractAttachmentViewController <ICAttachmentFindable, ICInlineAttachmentViewAnimationDelegate, ICAttachmentViewControllerInitializing>



@property (readonly, weak, nonatomic) ICInlineAttachment *attachment; // ivar: _attachment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSLayoutManager *displayTextLayoutManager; // ivar: _displayTextLayoutManager
@property (readonly, nonatomic) NSTextContainer *displayTextTextContainer; // ivar: _displayTextTextContainer
@property (readonly, nonatomic) NSTextStorage *displayTextTextStorage; // ivar: _displayTextTextStorage
@property (nonatomic) BOOL forManualRendering; // ivar: _forManualRendering
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger initialCharIndex; // ivar: _initialCharIndex
@property (weak, nonatomic) NSLayoutManager *layoutManager; // ivar: _layoutManager
@property (nonatomic) _NSRange selectedSearchRange; // ivar: _selectedSearchRange
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (weak, nonatomic) ICInlineTextAttachment *textAttachment; // ivar: _textAttachment


-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithTextAttachment:(id)arg0 forManualRendering:(BOOL)arg1 layoutManager:(id)arg2 ;
-(id)initWithTextAttachment:(id)arg0 forManualRendering:(BOOL)arg1 layoutManager:(id)arg2 initialCharacterIndex:(NSUInteger)arg3 ;
-(id)inlineAttachmentView;
-(id)rectsForRange:(struct _NSRange )arg0 inFindableString:(id)arg1 ;
-(id)viewForRange:(struct _NSRange )arg0 inFindableString:(id)arg1 ;
-(struct _NSRange )selectedRangeWithinRange:(struct _NSRange )arg0 inFindableString:(id)arg1 ;
-(void)drawCharactersInRange:(struct _NSRange )arg0 inFindableString:(id)arg1 forContentView:(id)arg2 ;
-(void)layoutWithStyleAttributesOfCharacterIndex:(NSUInteger)arg0 ;
-(void)loadView;
-(void)redrawInlineAttachmentView:(id)arg0 ;
-(void)relayoutInlineAttachmentView:(id)arg0 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 inFindableString:(id)arg2 ;
-(void)scrollToRange:(struct _NSRange )arg0 inFindableString:(id)arg1 ;
-(void)setHighlightPatternRegex:(id)arg0 ;
-(void)setSelectedRange:(struct _NSRange )arg0 inFindableString:(id)arg1 ;
-(void)updateDisplayTextTextStorage;


@end


#endif