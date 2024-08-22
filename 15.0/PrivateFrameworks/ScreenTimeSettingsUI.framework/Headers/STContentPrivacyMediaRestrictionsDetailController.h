// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCONTENTPRIVACYMEDIARESTRICTIONSDETAILCONTROLLER_H
#define STCONTENTPRIVACYMEDIARESTRICTIONSDETAILCONTROLLER_H

@class PSListController;
@protocol STContentPrivacyViewModelCoordinator;


#import "STRegionRatings.h"

@interface STContentPrivacyMediaRestrictionsDetailController : PSListController

@property (retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator; // ivar: _coordinator
@property (retain) STRegionRatings *regionRatings; // ivar: _regionRatings


-(id)_getSpecifierValueForItem:(id)arg0 viewModel:(id)arg1 restrictionValues:(id)arg2 ;
-(id)defaultLinkListSpecifierWithConfiguration:(id)arg0 key:(id)arg1 ;
-(id)defaultLinkListSpecifierWithConfiguration:(id)arg0 key:(id)arg1 titlesByValue:(id)arg2 sortByTitle:(BOOL)arg3 ;
-(id)defaultLinkListSpecifierWithItem:(id)arg0 titlesByValue:(id)arg1 sortByTitle:(BOOL)arg2 ;
-(id)defaultSwitchSpecifierWithConfiguration:(id)arg0 key:(id)arg1 ;
-(id)getItemSpecifierValue:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRegionRatings:(id)arg0 ;
-(id)radioGroupSpecifierWithName:(id)arg0 footerText:(id)arg1 item:(id)arg2 ;
-(id)specifiers;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setItemSpecifierValue:(id)arg0 specifier:(id)arg1 ;
-(void)showWebFilterRestrictions:(id)arg0 ;


@end


#endif