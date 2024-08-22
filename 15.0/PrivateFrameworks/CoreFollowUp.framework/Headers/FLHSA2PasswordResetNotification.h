// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLHSA2PASSWORDRESETNOTIFICATION_H
#define FLHSA2PASSWORDRESETNOTIFICATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FLHSA2PasswordResetNotification : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (copy, nonatomic) NSString *approveButtonTitle; // ivar: _approveButtonTitle
@property (copy, nonatomic) NSString *dismissButtonTitle; // ivar: _dismissButtonTitle
@property (copy, nonatomic) NSString *informativeText; // ivar: _informativeText
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)followUpItemUserInfo;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFollowUpItemUserInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif