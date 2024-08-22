// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONVIEWLISTACCESSORYCONTROL_H
#define _UICOLLECTIONVIEWLISTACCESSORYCONTROL_H

@protocol UITableConstants;


#import "UIControl.h"
#import "UIImageView.h"
#import "UIColor.h"

@interface _UICollectionViewListAccessoryControl : UIControl {
    UIImageView *_imageView;
    BOOL _needsImageViewUpdate;
}


@property (retain, nonatomic) UIColor *accessoryBackgroundColor; // ivar: _accessoryBackgroundColor
@property (retain, nonatomic) UIColor *accessoryTintColor; // ivar: _accessoryTintColor
@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (retain, nonatomic) NSObject<UITableConstants> *constants; // ivar: _constants
@property (nonatomic) NSInteger type; // ivar: _type


-(NSUInteger)_controlEventsForActionTriggered;
-(id)_renderedImage;
-(id)initWithType:(NSInteger)arg0 constants:(id)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_executeActionHandler;
-(void)_setNeedsImageViewUpdate;
-(void)_updateImageViewIfNeeded;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif