// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMEDIASERVICEACCOUNTCELL_H
#define HUMEDIASERVICEACCOUNTCELL_H

@class UITableViewCell, NSString, HFItem;
@protocol HUCellProtocol, HUResizableCellDelegate;


#import "HUMediaServiceAccountView.h"

@interface HUMediaServiceAccountCell : UITableViewCell <HUCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item;
@property (retain, nonatomic) HUMediaServiceAccountView *mediaServiceAccountView; // ivar: _mediaServiceAccountView
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif