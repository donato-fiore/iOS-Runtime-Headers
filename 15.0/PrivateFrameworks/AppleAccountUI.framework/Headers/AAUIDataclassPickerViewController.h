// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIDATACLASSPICKERVIEWCONTROLLER_H
#define AAUIDATACLASSPICKERVIEWCONTROLLER_H

@class UIViewController, UITableView, NSArray, NSDictionary, NSString;
@protocol AAUISwitchTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate, NSCoding, NSSecureCoding, AAUIDataclassPickerViewControllerDelegate;


#import "AAUIHeaderView.h"
#import "AAUIBuddyView.h"
#import "_AAUIDataclassOptionCache.h"

@interface AAUIDataclassPickerViewController : UIViewController <AAUISwitchTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate, NSCoding, NSSecureCoding>

 {
    AAUIHeaderView *_tableHeaderView;
    UITableView *_tableView;
    AAUIBuddyView *_tableFooterView;
    NSArray *_compactConstraints;
    NSArray *_expandedConstraints;
    _AAUIDataclassOptionCache *_dataclassOptionCache;
}


@property (copy, nonatomic) NSDictionary *dataclassOptions;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIDataclassPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) AAUIBuddyView *view;


+(BOOL)supportsSecureCoding;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(CGFloat)_compressedHeightForView:(id)arg0 containedInView:(id)arg1 ;
-(CGFloat)heightForFooterInTableView:(id)arg0 ;
-(CGFloat)heightForHeaderInTableView:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cancelBarButtonItem;
-(id)_messageText;
-(id)_nextBarButtonItem;
-(id)_signOutFooterText;
-(id)_tableFooterView;
-(id)_tableHeaderView;
-(id)_tableView;
-(id)_titleText;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataclassOptions:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)viewForFooterInTableView:(id)arg0 ;
-(id)viewForHeaderInTableView:(id)arg0 ;
-(void)_additionalInformationSelected:(id)arg0 ;
-(void)_cancelButtonSelected:(id)arg0 ;
-(void)_delegate_signOutViewControllerDidCompleteWithDataclassActions:(id)arg0 ;
-(void)_dismissAdditionalInformation:(id)arg0 ;
-(void)_nextButtonSelected:(id)arg0 ;
-(void)_updateConstraintsForTraitCollection:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadView;
-(void)switchTableViewCellDidUpdateValue:(id)arg0 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif