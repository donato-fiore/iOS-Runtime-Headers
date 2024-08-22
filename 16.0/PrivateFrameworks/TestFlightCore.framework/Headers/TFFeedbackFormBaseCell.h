// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFFEEDBACKFORMBASECELL_H
#define TFFEEDBACKFORMBASECELL_H

@class UITableViewCell, UIView;
@protocol TFFeedbackDataDisplayable, TFFeedbackDataUpdateProxy;



@interface TFFeedbackFormBaseCell : UITableViewCell <TFFeedbackDataDisplayable>



@property (retain, nonatomic) UIView *bottomSeparator; // ivar: _bottomSeparator
@property (readonly, nonatomic, getter=isSelectable) BOOL selectable;
@property (retain, nonatomic) UIView *topSeparator; // ivar: _topSeparator
@property (weak, nonatomic) NSObject<TFFeedbackDataUpdateProxy> *updateProxy; // ivar: _updateProxy


+(struct CGSize )sizeForEntry:(id)arg0 dataSource:(id)arg1 fittingSize:(struct CGSize )arg2 inTraitEnvironment:(id)arg3 ;
-(NSUInteger)displayableDataType;
-(id)_createSeparatorSubview;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGRect )_separatorFrameForTop:(BOOL)arg0 inLayoutBounds:(struct CGRect )arg1 ;
-(void)_setupSeparatorViewsForAppearingInSectionLocation:(int)arg0 ;
-(void)applyContentsOfEntry:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareSeparatorsForCellInSectionLocation:(int)arg0 ;
-(void)setDisplayedDataGroupInclusionBool:(BOOL)arg0 ;
-(void)setDisplayedDataImageCollection:(id)arg0 ;
-(void)setDisplayedDataNumber:(id)arg0 ;
-(void)setDisplayedDataString:(id)arg0 ;


@end


#endif