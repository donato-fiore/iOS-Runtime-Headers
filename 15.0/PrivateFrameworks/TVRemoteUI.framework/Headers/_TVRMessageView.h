// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRMESSAGEVIEW_H
#define _TVRMESSAGEVIEW_H

@class UIView, UIButton;
@protocol TVRUIStyleProvider;



@interface _TVRMessageView : UIView

@property (retain, nonatomic) UIView *currentView; // ivar: _currentView
@property (nonatomic) NSUInteger messageType; // ivar: _messageType
@property (retain, nonatomic) NSObject<TVRUIStyleProvider> *styleProvider; // ivar: _styleProvider
@property (retain, nonatomic) UIButton *turnOnWiFiButton; // ivar: _turnOnWiFiButton
@property (nonatomic, getter=isWifiConnectInProgress) BOOL wifiConnectInProgress; // ivar: _wifiConnectInProgress


-(BOOL)_largeAccessibilityFontSizesEnabled;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_convertToAttributedStringWithReplacement:(id)arg0 imagePointSize:(CGFloat)arg1 ;
-(id)_deviceTypeString;
-(id)_loadingViewWithTitle:(id)arg0 forSize:(struct CGSize )arg1 ;
-(id)_localizedLegacyPairingMessageForDeviceModel;
-(struct CGSize )intrinsicContentSize;
-(void)_turnOnWireless:(id)arg0 ;
-(void)clearContent;
-(void)layoutSubviews;
-(void)showLoadingSpinner;
-(void)showMessageWithError:(id)arg0 device:(id)arg1 ;
-(void)showMessageWithTitle:(id)arg0 message:(id)arg1 ;
-(void)showMessageWithTitle:(id)arg0 message:(id)arg1 titleFont:(id)arg2 ;
-(void)showNoAssociatedNetworkMessage;
-(void)showNoWIFIConnectionMessage;
-(void)showPairingMessageWithCode:(id)arg0 ;
-(void)showSearchingSpinner;


@end


#endif