// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ASACCOUNTMANAGERTIPCONTENT_H
#define _ASACCOUNTMANAGERTIPCONTENT_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface _ASAccountManagerTipContent : NSObject

@property (readonly, copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (readonly, copy, nonatomic) NSString *declineButtonTitle; // ivar: _declineButtonTitle
@property (readonly, nonatomic) BOOL hasBorderedImage; // ivar: _hasBorderedImage
@property (readonly, copy, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)_iCloudKeychainTipHasBorderedImage;
+(id)_contentForiCloudKeychainTip;
+(id)_iCloudKeychainTipButtonTitle;
+(id)_iCloudKeychainTipDeclineButtonTitle;
+(id)_iCloudKeychainTipImage;
+(id)_iCloudKeychainTipTitle;
+(id)contentForTipType:(NSInteger)arg0 ;
-(id)_initWithImage:(id)arg0 hasBorderedImage:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3 buttonTitle:(id)arg4 declineButtonTitle:(id)arg5 ;


@end


#endif