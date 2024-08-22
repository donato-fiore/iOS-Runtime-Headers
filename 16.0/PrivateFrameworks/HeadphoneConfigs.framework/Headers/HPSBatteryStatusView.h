// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HPSBATTERYSTATUSVIEW_H
#define HPSBATTERYSTATUSVIEW_H

@class UIView, NSString, UIImageView;


#import "BTSDevice.h"

@interface HPSBatteryStatusView : UIView {
    BTSDevice *currentDevice;
    ? status;
    NSString *productIdString;
    BOOL untethered;
    BOOL darkMode;
    unsigned char deviceColor;
    UIImageView *deviceImageView;
    UIImageView *caseImageView;
    UIImageView *leftImageView;
    UIImageView *rightImageView;
}




-(BOOL)isProductOfDifferentColors;
-(id)getAssetsDictionary:(unsigned int)arg0 ;
-(id)getDeviceCaseIcon:(unsigned int)arg0 ;
-(id)getProductIDString;
-(id)initWithFrame:(struct CGRect )arg0 device:(id)arg1 darkMode:(BOOL)arg2 ;
-(unsigned char)bestDeviceColor:(unsigned int)arg0 productID:(unsigned int)arg1 ;
-(void)applyFilters:(id)arg0 imageView:(id)arg1 ;
-(void)applyFiltersForMode:(BOOL)arg0 ;
-(void)getBatteryStatus;
-(void)setupViews;


@end


#endif