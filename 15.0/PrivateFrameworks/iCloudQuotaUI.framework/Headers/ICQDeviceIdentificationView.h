// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQDEVICEIDENTIFICATIONVIEW_H
#define ICQDEVICEIDENTIFICATIONVIEW_H

@class UIView, UIImageView, UILabel, UIImage;



@interface ICQDeviceIdentificationView : UIView {
    UIImageView *_deviceImageView;
    UILabel *_deviceNameLabel;
    UILabel *_deviceModelLabel;
}


@property (retain, nonatomic) UIImage *deviceImage;


+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 deviceName:(id)arg1 deviceIdentifier:(id)arg2 imageURL:(id)arg3 isCurrentDevice:(BOOL)arg4 ;
-(void)layoutSubviews;
-(void)loadImageForDeviceIdentifier:(id)arg0 URL:(id)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)sizeToFit;


@end


#endif