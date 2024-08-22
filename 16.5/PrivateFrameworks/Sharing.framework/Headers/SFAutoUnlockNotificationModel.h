// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAUTOUNLOCKNOTIFICATIONMODEL_H
#define SFAUTOUNLOCKNOTIFICATIONMODEL_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFAutoUnlockNotificationModel : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *applicationIconData; // ivar: _applicationIconData
@property (copy, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (readonly, copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, copy, nonatomic) NSString *modelIdentifier; // ivar: _modelIdentifier
@property (copy, nonatomic) NSString *navBarTitle; // ivar: _navBarTitle
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceName:(id)arg0 modelIdentifier:(id)arg1 type:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif