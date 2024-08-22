// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKELECTROCARDIOGRAMTABLEVIEWCELL_H
#define HKELECTROCARDIOGRAMTABLEVIEWCELL_H

@class UITableViewCell, NSLayoutConstraint, HKElectrocardiogram;


#import "HKElectrocardiogramCardView.h"

@interface HKElectrocardiogramTableViewCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *bottomPaddingConstraint; // ivar: _bottomPaddingConstraint
@property (nonatomic) BOOL bottomPaddingDisabled; // ivar: _bottomPaddingDisabled
@property (retain, nonatomic) HKElectrocardiogramCardView *cardView; // ivar: _cardView
@property (retain, nonatomic) HKElectrocardiogram *sample;


+(CGFloat)estimatedHeight;
+(id)defaultReuseIdentifier;
-(id)initWithSample:(id)arg0 dateCache:(id)arg1 onboarding:(BOOL)arg2 activeAlgorithmVersion:(NSInteger)arg3 ;
-(void)_setupConstraints;
-(void)_setupUIWithSample:(id)arg0 dateCache:(id)arg1 onboarding:(BOOL)arg2 activeAlgorithmVersion:(NSInteger)arg3 ;
-(void)prepareForReuse;
-(void)setActiveAlgorithmVersion:(NSInteger)arg0 ;


@end


#endif