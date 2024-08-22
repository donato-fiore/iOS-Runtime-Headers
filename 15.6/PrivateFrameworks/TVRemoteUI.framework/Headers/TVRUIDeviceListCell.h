// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRUIDEVICELISTCELL_H
#define TVRUIDEVICELISTCELL_H

@class UITableViewCell, UIView;
@protocol TVRUIDevice, TVRUIStyleProvider;



@interface TVRUIDeviceListCell : UITableViewCell

@property (retain, nonatomic) NSObject<TVRUIDevice> *device; // ivar: _device
@property (retain, nonatomic) UIView *separator; // ivar: _separator
@property (nonatomic) BOOL showSeparator; // ivar: _showSeparator
@property (retain, nonatomic) NSObject<TVRUIStyleProvider> *styleProvider; // ivar: _styleProvider


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_applyFilterForDevice:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif