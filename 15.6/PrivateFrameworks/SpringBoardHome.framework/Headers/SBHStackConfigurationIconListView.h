// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHSTACKCONFIGURATIONICONLISTVIEW_H
#define SBHSTACKCONFIGURATIONICONLISTVIEW_H

@protocol SBIconViewDelegate;


#import "SBIconListView.h"

@interface SBHStackConfigurationIconListView : SBIconListView

@property (weak, nonatomic) NSObject<SBIconViewDelegate> *iconViewDelegate; // ivar: _iconViewDelegate


-(Class)baseIconViewClass;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupCustomBackgroundConfigurationForIconView:(id)arg0 ;
-(void)configureIconView:(id)arg0 forIcon:(id)arg1 ;


@end


#endif