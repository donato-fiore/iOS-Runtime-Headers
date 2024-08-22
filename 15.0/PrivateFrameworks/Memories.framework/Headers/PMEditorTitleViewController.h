// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMEDITORTITLEVIEWCONTROLLER_H
#define PMEDITORTITLEVIEWCONTROLLER_H

@class UIViewController, NSString, UITableViewCell, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, TitleChangeInformable;


#import "PMTitleEditorProvider.h"

@interface PMEditorTitleViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>



@property (nonatomic) NSInteger activeCellIndex; // ivar: _activeCellIndex
@property (retain, nonatomic) NSString *activeCellText; // ivar: _activeCellText
@property (retain, nonatomic) UITableViewCell *collectionViewControllerCell; // ivar: _collectionViewControllerCell
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL sizeIsTransitioning; // ivar: _sizeIsTransitioning
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (weak, nonatomic) NSObject<TitleChangeInformable> *titleChangeInformableDelegate; // ivar: _titleChangeInformableDelegate
@property (retain, nonatomic) PMTitleEditorProvider *titleProvider; // ivar: _titleProvider


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)dealloc;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textDidChange:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)updateFonts;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif