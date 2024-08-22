// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSCROLLABLESEGMENTEDPICKERVIEW_H
#define MUSCROLLABLESEGMENTEDPICKERVIEW_H

@class NSLayoutConstraint, NSString, NSArray;
@protocol MUScrollableSegmentedPickerContentViewDelegate, MUScrollableSegmentedPickerViewDelegate;


#import "MUPassthroughView.h"
#import "MUScrollableSegmentedPickerContentView.h"

@interface MUScrollableSegmentedPickerView : MUPassthroughView <MUScrollableSegmentedPickerContentViewDelegate>

 {
    MUScrollableSegmentedPickerContentView *_contentView;
    NSLayoutConstraint *_widthConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUScrollableSegmentedPickerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger selectedIndex;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *viewModels;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupContentView;
-(void)layoutSubviews;
-(void)segmentedPickerContentViewDidUpdateSelection:(id)arg0 ;


@end


#endif