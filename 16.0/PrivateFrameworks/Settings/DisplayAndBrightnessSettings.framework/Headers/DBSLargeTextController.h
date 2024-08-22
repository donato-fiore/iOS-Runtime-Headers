// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSLARGETEXTCONTROLLER_H
#define DBSLARGETEXTCONTROLLER_H

@class PSListController;


#import "DBSLargeTextSliderListController.h"

@interface DBSLargeTextController : PSListController {
    DBSLargeTextSliderListController *_sliderListController;
    DBSLargeTextSliderListController *_extendedRangeSliderListController;
    BOOL _usesExtendedRange;
}


@property (nonatomic) BOOL savesCategoryNameOnlyOnSliderEvent; // ivar: _savesCategoryNameOnlyOnSliderEvent
@property (nonatomic) BOOL showsExtendedRangeSwitch; // ivar: _showsExtendedRangeSwitch
@property (nonatomic) BOOL showsResetSliderButton; // ivar: _showsResetSliderButton


-(BOOL)readUsesExtendedRange;
-(id)init;
-(id)readPreferredContentSizeCategoryName;
-(id)specifiers;
-(id)usesExtendedRangeForSpecifier:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)resetContentSizeCategoryName;
-(void)savePreferredContentSizeCategoryName:(id)arg0 ;
-(void)saveUsesExtendedRange:(BOOL)arg0 ;
-(void)setUsesExtendedRange:(id)arg0 forSpecifier:(id)arg1 ;
-(void)sizeCategoryDidChange:(id)arg0 ;
-(void)updateSlider;
-(void)updateSlidersForNewUsesExtendedRangeValue:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif