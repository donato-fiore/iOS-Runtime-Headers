// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NOTEPREVIEWCONTROLLER_H
#define NOTEPREVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, NoteObject;
@protocol UITextViewDelegate, NoteContentLayerAttachmentPresentationDelegate, ICNotePreviewing;


#import "NotesBackgroundView.h"
#import "NoteContentLayer.h"
#import "ICSearchResult.h"

@interface NotePreviewController : UIViewController <UITextViewDelegate, NoteContentLayerAttachmentPresentationDelegate, ICNotePreviewing>



@property (retain, nonatomic) NSArray *attachmentPresentations; // ivar: _attachmentPresentations
@property (readonly, nonatomic) NotesBackgroundView *backgroundView;
@property (retain, nonatomic) NoteContentLayer *contentLayer; // ivar: _contentLayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NoteObject *note; // ivar: _note
@property (retain, nonatomic) ICSearchResult *searchResult; // ivar: _searchResult
@property (readonly) Class superclass;


-(id)attachmentContentIDs;
-(id)attachmentPresentationForContentID:(id)arg0 ;
-(id)initWithNote:(id)arg0 ;
-(id)initWithNote:(id)arg0 searchResult:(id)arg1 ;
-(id)noteContentLayer:(id)arg0 attachmentPresentationForContentID:(id)arg1 ;
-(id)noteContentLayer:(id)arg0 fileURLForAttachmentWithContentID:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)dealloc;
-(void)setupPreview;
-(void)setupPreviewWithInitialFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateForceLightContentIfNecessary;


@end


#endif