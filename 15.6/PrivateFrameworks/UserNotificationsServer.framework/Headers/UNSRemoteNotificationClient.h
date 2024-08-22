// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNSREMOTENOTIFICATIONCLIENT_H
#define UNSREMOTENOTIFICATIONCLIENT_H

@class NSString, NSData;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UNSRemoteNotificationClient : NSObject <NSCoding, NSSecureCoding>



@property (copy, nonatomic) NSString *environment; // ivar: _environment
@property (copy, nonatomic) NSData *lastKnownDeviceToken; // ivar: _lastKnownDeviceToken
@property (copy, nonatomic) NSString *tokenIdentifier; // ivar: _tokenIdentifier


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif