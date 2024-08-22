// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSLARGETEXTSLIDERLISTCONTROLLER_H
#define DBSLARGETEXTSLIDERLISTCONTROLLER_H

@class PSListController, PSSpecifier, NSArray;


#import "DBSLargeTextController.h"

@interface DBSLargeTextSliderListController : PSListController {
    PSSpecifier *_sliderGroupSpecifier;
    BOOL _viewIsDisappearing;
}


@property (copy, nonatomic) NSArray *contentSizeCategories; // ivar: _contentSizeCategories
@property (weak, nonatomic) DBSLargeTextController *largeTextController; // ivar: _largeTextController
@property (nonatomic) NSInteger selectedCategoryIndex; // ivar: _selectedCategoryIndex
@property (nonatomic) BOOL showsExtendedRangeSwitch; // ivar: _showsExtendedRangeSwitch
@property (nonatomic) BOOL showsLargerSizesHelpText; // ivar: _showsLargerSizesHelpText
@property (nonatomic) BOOL showsResetSliderButton; // ivar: _showsResetSliderButton
@property (nonatomic) BOOL usesExtendedRange; // ivar: _usesExtendedRange


-(id)getDynamicTypeValueForSpecifier:(id)arg0 ;
-(id)initUsingExtendedRange:(BOOL)arg0 ;
-(id)specifiers;
-(void)loadView;
-(void)resetSliderValue;
-(void)setDynamicTypeValue:(id)arg0 forSpecifier:(id)arg1 ;
-(void)updateSliderValue;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif