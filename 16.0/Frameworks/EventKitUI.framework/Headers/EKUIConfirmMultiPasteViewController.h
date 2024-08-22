// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUICONFIRMMULTIPASTEVIEWCONTROLLER_H
#define EKUICONFIRMMULTIPASTEVIEWCONTROLLER_H

@class UIViewController, UILabel, UITableView, EKAutocompleteSearchResult, EKEventStore, EKCalendar, NSDate, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, EKUIPasteboardManagerPasteDelegate, UIAdaptivePresentationControllerDelegate, EKUIConfirmMultiPasteViewControllerDelegate;


#import "EKUIPasteboardManager.h"

@interface EKUIConfirmMultiPasteViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, EKUIPasteboardManagerPasteDelegate, UIAdaptivePresentationControllerDelegate>

 {
    UILabel *_descriptionLabel;
    UITableView *_tableView;
    EKAutocompleteSearchResult *_searchResult;
    EKUIPasteboardManager *_pasteboardManager;
    EKEventStore *_eventStore;
    EKCalendar *_selectedCalendar;
    NSDate *_dateForPaste;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKUIConfirmMultiPasteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)editorForPasteboardManager:(id)arg0 ;
-(id)initWithSearchResult:(id)arg0 pasteboardManager:(id)arg1 eventStore:(id)arg2 dateForPaste:(id)arg3 ;
-(id)popupMenu:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)viewControllerToPresentAlertFromForPasteboardManager:(id)arg0 ;
-(void)_cancel:(id)arg0 ;
-(void)_done:(id)arg0 ;
-(void)pasteboardManager:(id)arg0 beginEditingEvent:(id)arg1 ;
-(void)pasteboardManager:(id)arg0 didFinishPasteWithResult:(NSUInteger)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif