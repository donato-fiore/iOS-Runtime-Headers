// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKQUANTITYSERIESTABLEVIEWCELL_H
#define HKQUANTITYSERIESTABLEVIEWCELL_H

@class UITableViewCell, NSArray;



@interface HKQuantitySeriesTableViewCell : UITableViewCell

@property (retain, nonatomic) NSArray *currentConstraints; // ivar: _currentConstraints


+(id)reuseIdentifier;
-(id)_makeAccessibilityConstraints;
-(id)_makeConstraints;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configureLabels;
-(void)_configureLayoutForTraitCollection:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif