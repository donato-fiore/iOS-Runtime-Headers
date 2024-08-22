// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKEXPLOREGUIDESREUSABLEVIEW_H
#define MKEXPLOREGUIDESREUSABLEVIEW_H

@class UICollectionReusableView;


#import "MKExploreGuidesView.h"

@interface MKExploreGuidesReusableView : UICollectionReusableView

@property (retain, nonatomic) MKExploreGuidesView *exploreGuidesView; // ivar: _exploreGuidesView


+(id)reuseIdentifier;
-(void)configureWithExploreGuides:(id)arg0 tapHandler:(id)arg1 ;


@end


#endif