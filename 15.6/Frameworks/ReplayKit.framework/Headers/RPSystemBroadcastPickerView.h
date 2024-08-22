// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPSYSTEMBROADCASTPICKERVIEW_H
#define RPSYSTEMBROADCASTPICKERVIEW_H

@class UIView, UIButton, NSString;
@protocol NSCoding;



@interface RPSystemBroadcastPickerView : UIView <NSCoding>



@property (retain, nonatomic) UIButton *broadcastPickerButton; // ivar: _broadcastPickerButton
@property (retain, nonatomic) NSString *preferredExtension; // ivar: _preferredExtension
@property (nonatomic) BOOL showsMicrophoneButton; // ivar: _showsMicrophoneButton


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addBroadcastPickerButton;
-(void)buttonPressed:(id)arg0 ;
-(void)screenCaptureChanged;


@end


#endif