// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACETILESLISTVIEW_H
#define MUPLACETILESLISTVIEW_H

@class NSString, NSArray;
@protocol MUPlaceVerticalCardContainerViewDelegate, MUPlaceTilesListViewDelegate;


#import "MUPlaceVerticalCardContainerView.h"

@interface MUPlaceTilesListView : MUPlaceVerticalCardContainerView <MUPlaceVerticalCardContainerViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MUPlaceTilesListViewDelegate> *listFeedbackDelegate; // ivar: _listFeedbackDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *viewModels; // ivar: _viewModels


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateAppearance;
-(void)verticalCardContainerView:(id)arg0 didSelectRow:(id)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif