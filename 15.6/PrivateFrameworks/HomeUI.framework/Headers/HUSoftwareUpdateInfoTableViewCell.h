// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSOFTWAREUPDATEINFOTABLEVIEWCELL_H
#define HUSOFTWAREUPDATEINFOTABLEVIEWCELL_H

@class UITableViewCell, NSString, HFItem;
@protocol HUSoftwareUpdateInternalResizingDelegate, HUCellProtocol, HUResizableCellDelegate;


#import "HUSoftwareUpdateInfoView.h"

@interface HUSoftwareUpdateInfoTableViewCell : UITableViewCell <HUSoftwareUpdateInternalResizingDelegate, HUCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUSoftwareUpdateInfoView *infoView; // ivar: _infoView
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate; // ivar: _resizingDelegate
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)didUpdateRequiredHeightForSoftwareUpdateInfoView:(id)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif