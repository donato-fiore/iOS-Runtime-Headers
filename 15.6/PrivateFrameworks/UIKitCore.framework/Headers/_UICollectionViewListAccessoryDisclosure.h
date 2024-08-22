// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWLISTACCESSORYDISCLOSURE_H
#define _UICOLLECTIONVIEWLISTACCESSORYDISCLOSURE_H

@protocol UITableConstants;


#import "UIControl.h"
#import "UIImageView.h"
#import "UIColor.h"
#import "UIImage.h"

@interface _UICollectionViewListAccessoryDisclosure : UIControl {
    UIImageView *_imageView;
}


@property (retain, nonatomic) UIColor *accessoryTintColor; // ivar: _accessoryTintColor
@property (retain, nonatomic) NSObject<UITableConstants> *constants; // ivar: _constants
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL rotated; // ivar: _rotated
@property (nonatomic) CGFloat rotationAngle; // ivar: _rotationAngle


-(CGFloat)_enforcedWidthForWidth:(CGFloat)arg0 ;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)initWithConstants:(id)arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )_minimumSizeForHitTesting;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateRotation;
-(void)addActionHandler:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif