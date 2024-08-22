// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUDAYROWVIEW_H
#define MUDAYROWVIEW_H

@class UIView, UIView<MULabelViewProtocol>, NSArray, NSString;
@protocol MUStackable;


#import "MUDayRowViewModel.h"

@interface MUDayRowView : UIView <MUStackable>

 {
    UIView<MULabelViewProtocol> *_headerLabel;
    UIView<MULabelViewProtocol> *_dayLabel;
    UIView<MULabelViewProtocol> *_hoursLabel;
    NSArray *_hoursConstraints;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isStacked) BOOL stacked; // ivar: _stacked
@property (readonly) Class superclass;
@property (retain, nonatomic) MUDayRowViewModel *viewModel; // ivar: _viewModel


+(id)_hoursMonospacedFont;
-(BOOL)shouldStackForProposedWidth:(CGFloat)arg0 ;
-(id)_createHoursConstraints;
-(id)initWithViewModel:(id)arg0 ;
-(void)_refreshHoursLabel;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)_updateFonts;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif