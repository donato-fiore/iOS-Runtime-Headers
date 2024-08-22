// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEPODDETAILVIEW_H
#define HUHOMEPODDETAILVIEW_H

@class UIButton, UIImageView, UIView, UILabel;
@protocol HUHomePodDetailViewDelegate, HFStringGenerator;



@interface HUHomePodDetailView : UIButton

@property (weak, nonatomic) NSObject<HUHomePodDetailViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isAnimatingPop; // ivar: _isAnimatingPop
@property (readonly, nonatomic) NSUInteger mediaSystemRole; // ivar: _mediaSystemRole
@property (readonly, nonatomic) UIImageView *unitBadgeLabel; // ivar: _unitBadgeLabel
@property (readonly, nonatomic) UIView *unitImageView; // ivar: _unitImageView
@property (copy, nonatomic) NSObject<HFStringGenerator> *unitName;
@property (readonly, nonatomic) UILabel *unitNameLabel; // ivar: _unitNameLabel


-(id)initWithRole:(NSUInteger)arg0 variant:(NSUInteger)arg1 ;
-(void)_setupConstraints;
-(void)_speakerTapped;
-(void)_updateImagesForRole;


@end


#endif