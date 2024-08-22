// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPHYPERLINKSETTINGSVIEWCONTROLLER_H
#define TSWPHYPERLINKSETTINGSVIEWCONTROLLER_H

@class UIViewController, UITableViewCell, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, TSKKeyboardObserver;


#import "TSWPHyperlinkField.h"

@interface TSWPHyperlinkSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, TSKKeyboardObserver>

 {
    UITableViewCell *_editingCell;
    BOOL _readOnly;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSWPHyperlinkField *hyperlink; // ivar: _hyperlink
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithHyperlink:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)keyboardDidHideOrUndock:(id)arg0 ;
-(void)keyboardDidShowOrDock:(id)arg0 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif