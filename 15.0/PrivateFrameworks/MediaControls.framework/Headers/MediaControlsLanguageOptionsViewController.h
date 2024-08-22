// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLSLANGUAGEOPTIONSVIEWCONTROLLER_H
#define MEDIACONTROLSLANGUAGEOPTIONSVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, UIView, MPRequestResponseController, MPAVClippingTableView, MTVisualStylingProvider;
@protocol MPRequestResponseControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate, MediaControlsLanguageOptionsViewControllerDelegate;



@interface MediaControlsLanguageOptionsViewController : UIViewController <MPRequestResponseControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MediaControlsLanguageOptionsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *languageOptionGroups; // ivar: _languageOptionGroups
@property (retain, nonatomic) UIView *materialView; // ivar: _materialView
@property (retain, nonatomic) MPRequestResponseController *requestResponseController; // ivar: _requestResponseController
@property (readonly) Class superclass;
@property (retain, nonatomic) MPAVClippingTableView *tableView; // ivar: _tableView
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // ivar: _visualStylingProvider


-(BOOL)_canShowWhileLocked;
-(BOOL)controller:(id)arg0 shouldRetryFailedRequestWithError:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithRouteUID:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)controller:(id)arg0 defersResponseReplacement:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif