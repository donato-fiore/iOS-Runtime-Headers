// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUDOWNLOADCONTROLCELL_H
#define HUDOWNLOADCONTROLCELL_H

@class UITableViewCell, NSString, HFItem;
@protocol HUCellProtocol, HUResizableCellDelegate;


#import "HUDownloadControl.h"

@interface HUDownloadControlCell : UITableViewCell <HUCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUDownloadControl *downloadControl; // ivar: _downloadControl
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif