// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSLARGETEXTCONTROLLER_H
#define PSLARGETEXTCONTROLLER_H



#import "PSListController.h"
#import "PSLargeTextSliderListController.h"

@interface PSLargeTextController : PSListController {
    PSLargeTextSliderListController *_sliderListController;
    PSLargeTextSliderListController *_extendedRangeSliderListController;
    BOOL _usesExtendedRange;
}


@property (nonatomic) BOOL showsExtendedRangeSwitch; // ivar: _showsExtendedRangeSwitch


-(id)init;
-(id)specifiers;
-(id)usesExtendedRangeForSpecifier:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)setUsesExtendedRange:(id)arg0 forSpecifier:(id)arg1 ;
-(void)sizeCategoryDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif