// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSTARKCONTACTSLISTVIEWCONTROLLER_H
#define CNSTARKCONTACTSLISTVIEWCONTROLLER_H

@class NSString, NSArray, AVExternalDevice, UITableViewHeaderFooterView;
@protocol CNContactListViewControllerDelegate, CNContactContentViewControllerDelegate;


#import "CNContactListViewController.h"
#import "CNContactListTableView.h"
#import "CNStarkNoContentBannerView.h"

@interface CNStarkContactsListViewController : CNContactListViewController <CNContactListViewControllerDelegate, CNContactContentViewControllerDelegate>



@property (retain, nonatomic) CNContactListTableView *contactListTableView; // ivar: _contactListTableView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *displayedContactProperties; // ivar: _displayedContactProperties
@property (retain, nonatomic) AVExternalDevice *externalDevice; // ivar: _externalDevice
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL limitedUI; // ivar: _limitedUI
@property (retain, nonatomic) CNStarkNoContentBannerView *overlayView; // ivar: _overlayView
@property (retain, nonatomic) UITableViewHeaderFooterView *siriHeaderView; // ivar: _siriHeaderView
@property (readonly) Class superclass;


+(id)makeContactsDisplayedProperties;
-(id)contactListStyleApplier;
-(id)createTableView;
-(id)init;
-(id)initWithDataSource:(id)arg0 searchable:(BOOL)arg1 environment:(id)arg2 shouldUseLargeTitle:(BOOL)arg3 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)contactListViewController:(id)arg0 didSelectContact:(id)arg1 ;
-(void)dealloc;
-(void)handleSiriHeaderViewTap:(id)arg0 ;
-(void)limitedUINotification:(id)arg0 ;
-(void)postMessageOverlayIfNecessary;
-(void)refreshTableViewHeaderWithSize:(struct CGSize )arg0 ;
-(void)setupDataSource;
-(void)showContactListTableView;
-(void)showOverlayView;
-(void)updateLimitedUI;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif