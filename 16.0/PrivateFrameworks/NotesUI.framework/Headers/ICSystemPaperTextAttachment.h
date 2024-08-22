// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSYSTEMPAPERTEXTATTACHMENT_H
#define ICSYSTEMPAPERTEXTATTACHMENT_H

@class NSURL, NSString, UIView, ICSelectorDelayer, NSHashTable;
@protocol PKPaperTextAttachment;


#import "ICInlineCanvasTextAttachment.h"
#import "ICDrawingHashtagsAndMentionsController.h"

@interface ICSystemPaperTextAttachment : ICInlineCanvasTextAttachment <PKPaperTextAttachment>



@property (readonly, nonatomic) NSURL *_encryptionDelegateCRContextURL;
@property (readonly, nonatomic) NSURL *_nonEncryptedContentCRContextURL;
@property (readonly, nonatomic) NSURL *_paperBundleURL;
@property (readonly, nonatomic) NSString *_paperIdentifier;
@property (weak, nonatomic) UIView *cachedControlViewForPlaceView; // ivar: _cachedControlViewForPlaceView
@property (weak, nonatomic) UIView *cachedDrawingViewForPlaceView; // ivar: _cachedDrawingViewForPlaceView
@property (retain, nonatomic) ICDrawingHashtagsAndMentionsController *hashtagsAndMentionsController; // ivar: _hashtagsAndMentionsController
@property (retain, nonatomic) ICSelectorDelayer *paperChangeSelectorDelayer; // ivar: _paperChangeSelectorDelayer
@property (copy, nonatomic) NSString *paperIdentifierBeforeAttachmentIsSet; // ivar: _paperIdentifierBeforeAttachmentIsSet
@property (retain, nonatomic) NSHashTable *systemPaperViews; // ivar: _systemPaperViews


+(BOOL)isEnabled;
-(BOOL)canDragWithoutSelecting;
-(id)_image;
-(id)attachmentAsNSTextAttachment;
-(id)attachmentViews;
-(id)contents;
-(id)fileType;
-(id)initWithData:(id)arg0 ofType:(id)arg1 ;
-(id)initWithPaperIdentifier:(id)arg0 ;
-(id)inlineViews;
-(id)printableTextContentForAppearanceType:(NSUInteger)arg0 ;
-(id)viewProviderForParentView:(id)arg0 characterIndex:(NSUInteger)arg1 layoutManager:(id)arg2 ;
-(struct CGRect )_paperBoundsHint;
-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;
-(struct CGSize )_paperSizeHint;
-(void)_linkCanvasElementsDidChange;
-(void)_paperDidChangeLocally;
-(void)dealloc;
-(void)detachView:(id)arg0 fromParentView:(id)arg1 ;
-(void)paperDidChange;
-(void)placeView:(id)arg0 withFrame:(struct CGRect )arg1 inParentView:(id)arg2 characterIndex:(NSUInteger)arg3 layoutManager:(id)arg4 ;
-(void)resetZoom;


@end


#endif