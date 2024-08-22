// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HULOCKUPTABLEVIEWCELL_H
#define HULOCKUPTABLEVIEWCELL_H

@class UITableViewCell, NSString, HFItem;
@protocol HULockupInternalResizingDelegate, HUCellProtocol, HUResizableCellDelegate;


#import "HULockupView.h"

@interface HULockupTableViewCell : UITableViewCell <HULockupInternalResizingDelegate, HUCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item;
@property (readonly, nonatomic) HULockupView *lockupView; // ivar: _lockupView
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate; // ivar: _resizingDelegate
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)didUpdateRequiredHeightForLockupView:(id)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif