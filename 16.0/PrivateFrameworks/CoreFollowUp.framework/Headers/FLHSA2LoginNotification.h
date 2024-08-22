// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLHSA2LOGINNOTIFICATION_H
#define FLHSA2LOGINNOTIFICATION_H

@class NSString, NSNumber, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FLHSA2LoginNotification : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (copy, nonatomic) NSString *approveButtonTitle; // ivar: _approveButtonTitle
@property (copy, nonatomic) NSString *codePrompt; // ivar: _codePrompt
@property (copy, nonatomic) NSString *deviceColorString; // ivar: _deviceColorString
@property (copy, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (copy, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (copy, nonatomic) NSString *dismissButtonTitle; // ivar: _dismissButtonTitle
@property (copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (copy, nonatomic) NSString *informativeText; // ivar: _informativeText
@property (copy, nonatomic) NSNumber *latitude; // ivar: _latitude
@property (copy, nonatomic) NSNumber *longitude; // ivar: _longitude
@property (copy, nonatomic) NSString *pushMessageID; // ivar: _pushMessageID
@property (copy, nonatomic) NSSet *supportedDismissActions; // ivar: _supportedDismissActions
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL userAllowedSignIn; // ivar: _userAllowedSignIn


+(BOOL)supportsSecureCoding;
-(id)followUpItemUserInfo;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFollowUpItemUserInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif