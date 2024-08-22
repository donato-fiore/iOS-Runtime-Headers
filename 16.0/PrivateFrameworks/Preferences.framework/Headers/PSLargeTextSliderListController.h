// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSLARGETEXTSLIDERLISTCONTROLLER_H
#define PSLARGETEXTSLIDERLISTCONTROLLER_H

@class NSArray;


#import "PSListController.h"
#import "PSSpecifier.h"

@interface PSLargeTextSliderListController : PSListController {
    PSSpecifier *_sliderGroupSpecifier;
    BOOL _viewIsDisappearing;
}


@property (copy, nonatomic) NSArray *contentSizeCategories; // ivar: _contentSizeCategories
@property (nonatomic) NSInteger selectedCategoryIndex; // ivar: _selectedCategoryIndex
@property (nonatomic) BOOL showsExtendedRangeSwitch; // ivar: _showsExtendedRangeSwitch
@property (nonatomic) BOOL showsLargerSizesHelpText; // ivar: _showsLargerSizesHelpText
@property (nonatomic) BOOL usesExtendedRange; // ivar: _usesExtendedRange


-(id)getDynamicTypeValueForSpecifier:(id)arg0 ;
-(id)initUsingExtendedRange:(BOOL)arg0 ;
-(id)specifiers;
-(void)loadView;
-(void)setDynamicTypeValue:(id)arg0 forSpecifier:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif