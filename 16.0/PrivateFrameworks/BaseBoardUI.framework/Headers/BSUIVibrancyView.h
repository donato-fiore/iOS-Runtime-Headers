// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSUIVIBRANCYVIEW_H
#define BSUIVIBRANCYVIEW_H

@class UIView;


#import "BSUIVibrancyConfiguration.h"

@interface BSUIVibrancyView : UIView {
    ? _needsUpdate;
}


@property (copy, nonatomic) BSUIVibrancyConfiguration *configuration; // ivar: _configuration


+(BOOL)isDisabled;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidateFilters;
-(void)_update;
-(void)_updateFilterViewsIfNeeded;
-(void)invalidateSubviews;
-(void)layoutSubviews;
-(void)updateFilters;


@end


#endif