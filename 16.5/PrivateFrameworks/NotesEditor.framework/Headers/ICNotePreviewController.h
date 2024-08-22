// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTEPREVIEWCONTROLLER_H
#define ICNOTEPREVIEWCONTROLLER_H

@class ICNAViewController, NotesBackgroundView, NSString, ICNote, ICSearchResult, ICTextController;
@protocol UITextViewDelegate, ICNotePreviewing;


#import "ICTextView.h"

@interface ICNotePreviewController : ICNAViewController <UITextViewDelegate, ICNotePreviewing>



@property (readonly, nonatomic) NotesBackgroundView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICNote *note; // ivar: _note
@property (retain, nonatomic) ICSearchResult *searchResult; // ivar: _searchResult
@property (readonly) Class superclass;
@property (retain, nonatomic) ICTextController *textController; // ivar: _textController
@property (retain, nonatomic) ICTextView *textView; // ivar: _textView


-(BOOL)isNotePasswordProtectedAndLocked;
-(BOOL)shouldForceLightContent;
-(id)createTextViewUsingTextController:(id)arg0 stylingTextUsingSeparateTextStorageForRendering:(BOOL)arg1 ;
-(id)initWithNote:(id)arg0 ;
-(id)initWithNote:(id)arg0 searchResult:(id)arg1 ;
-(void)addPasswordEntryViewController;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)dealloc;
-(void)scrollToSearchResultIfNeeded;
-(void)setupPreview;
-(void)setupPreviewWithInitialFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateForceLightContentIfNecessary;
-(void)viewDidLoad;


@end


#endif