// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HULINKEDAPPLICATIONVIEW_H
#define HULINKEDAPPLICATIONVIEW_H

@class UIView, NSString, NSArray, UIImageView, UILabel, HFItem, NSURL, UIButton;
@protocol HUCellProtocol, HUResizableCellDelegate;


#import "HULinkedApplicationRatingView.h"

@interface HULinkedApplicationView : UIView <HUCellProtocol>



@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSArray *currentConstraints; // ivar: _currentConstraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) UILabel *installedLabel; // ivar: _installedLabel
@property (nonatomic) BOOL isInstalled; // ivar: _isInstalled
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UILabel *priceLabel; // ivar: _priceLabel
@property (retain, nonatomic) UILabel *publisherLabel; // ivar: _publisherLabel
@property (retain, nonatomic) HULinkedApplicationRatingView *ratingView; // ivar: _ratingView
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (retain, nonatomic) NSURL *storeURL; // ivar: _storeURL
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *viewButton; // ivar: _viewButton


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_viewButtonTapped:(id)arg0 ;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif