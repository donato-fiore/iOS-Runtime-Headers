// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTITLECONTROLCELL_H
#define HUTITLECONTROLCELL_H

@class NSString, UIView<HUControlView>;


#import "HUControlPanelCell.h"

@interface HUTitleControlCell : HUControlPanelCell

@property (copy, nonatomic) NSString *controlTitle;
@property (retain, nonatomic) UIView<HUControlView> *controlView;


-(id)allControlViews;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif