// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIHORIZONTALLYSCROLLINGTEXTBUTTONCONTROLLER_H
#define SEARCHUIHORIZONTALLYSCROLLINGTEXTBUTTONCONTROLLER_H

@class TLKTextButton, NSString, NUIContainerStackView;
@protocol NUIContainerViewDelegate;


#import "SearchUIHorizontallyScrollingButtonController.h"

@interface SearchUIHorizontallyScrollingTextButtonController : SearchUIHorizontallyScrollingButtonController <NUIContainerViewDelegate>



@property (retain, nonatomic) TLKTextButton *button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NUIContainerStackView *view;


-(BOOL)scrollsWithoutStoppingAtBoundaries;
-(BOOL)wantsSeparators;
-(id)init;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(void)setCardSectionRowModel:(id)arg0 ;


@end


#endif