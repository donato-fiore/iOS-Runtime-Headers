// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMEDIASOURCELISTITEMCELL_H
#define HUMEDIASOURCELISTITEMCELL_H

@class UIImageView, UIActivityIndicatorView;


#import "HUTitleDescriptionCell.h"

@interface HUMediaSourceListItemCell : HUTitleDescriptionCell

@property (retain, nonatomic) UIImageView *serviceIconView; // ivar: _serviceIconView
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif