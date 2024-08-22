// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTGROUPDIALCELL_H
#define AVTGROUPDIALCELL_H

@class UICollectionViewCell, UILabel, NSTimer, NSString;



@interface AVTGroupDialCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSTimer *shimmerTimer; // ivar: _shimmerTimer
@property (copy, nonatomic) NSString *string; // ivar: _string


+(id)boldLabelFont;
+(id)cellIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cancelShimmerTimer;
-(void)prepareForReuse;
-(void)setActiveItem:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)shimmerOnceWithCompletion:(id)arg0 ;
-(void)startShimmering;
-(void)stopShimmeringAnimated:(BOOL)arg0 ;


@end


#endif