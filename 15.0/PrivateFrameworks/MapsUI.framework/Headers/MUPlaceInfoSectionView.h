// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEINFOSECTIONVIEW_H
#define MUPLACEINFOSECTIONVIEW_H

@class NSArray;


#import "MUPlaceVerticalCardContainerView.h"

@interface MUPlaceInfoSectionView : MUPlaceVerticalCardContainerView

@property (copy, nonatomic) NSArray *viewModels; // ivar: _viewModels


-(id)draggableContent;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateAppearance;


@end


#endif