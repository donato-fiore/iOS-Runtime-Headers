// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISETTINGSTABLEHEADERFOOTERVIEW_H
#define SKUISETTINGSTABLEHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView;


#import "SKUISettingsHeaderFooterDescriptionView.h"

@interface SKUISettingsTableHeaderFooterView : UITableViewHeaderFooterView {
    SKUISettingsHeaderFooterDescriptionView *_settingsHeaderFooterDescriptionView;
}




-(void)displaySettingsHeaderFooterDescriptionView:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif