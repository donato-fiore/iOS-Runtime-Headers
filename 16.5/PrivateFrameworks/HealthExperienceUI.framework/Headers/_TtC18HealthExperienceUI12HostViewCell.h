// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI12HOSTVIEWCELL_H
#define _TTC18HEALTHEXPERIENCEUI12HOSTVIEWCELL_H

@class UICollectionViewCell;



@interface _TtC18HealthExperienceUI12HostViewCell : UICollectionViewCell {
    ? hostView;
    ? recreateViewControllerOnHostedFeedItemChange;
    ? item;
}


@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL selected;


-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)didLongPress:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif