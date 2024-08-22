// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNSTARKCONTACTVIEWCONTROLLER_H
#define CNSTARKCONTACTVIEWCONTROLLER_H

@class NSArray;
@protocol CNPropertyBestIDSValueQueryDelegate;


#import "CNContactContentUnitaryViewController.h"
#import "CNPropertyBestIDSValueQuery.h"
#import "CNStarkContactNameView.h"
#import "CNCardiMessageEmailGroup.h"

@interface CNStarkContactViewController : CNContactContentUnitaryViewController <CNPropertyBestIDSValueQueryDelegate>



@property (retain, nonatomic) NSArray *activatedConstraints; // ivar: _activatedConstraints
@property (retain, nonatomic) CNPropertyBestIDSValueQuery *bestiMessageQuery; // ivar: _bestiMessageQuery
@property (retain, nonatomic) CNStarkContactNameView *contactNameView; // ivar: _contactNameView
@property (retain, nonatomic) CNCardiMessageEmailGroup *iMessageEmailGroup; // ivar: _iMessageEmailGroup


+(BOOL)enablesTransportButtons;
+(NSInteger)tableViewStyle;
-(BOOL)hasTableViewHeaderFirstSection;
-(BOOL)isGeminiAvailable;
-(BOOL)isScrollViewControllingHeaderResizeAnimation:(id)arg0 ;
-(BOOL)shouldDisplayAvatarHeaderView;
-(id)applyContactStyle;
-(id)displayHeaderView;
-(id)initWithContact:(id)arg0 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)title;
-(struct CGSize )setupTableHeaderView;
-(void)_initiateBestiMessagePropertyQuery;
-(void)dealloc;
-(void)initializeTableViewsForHeaderHeight;
-(void)loadContactViewControllerViews;
-(void)queryComplete;
-(void)setupConstraints;
-(void)updateFontColors;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif