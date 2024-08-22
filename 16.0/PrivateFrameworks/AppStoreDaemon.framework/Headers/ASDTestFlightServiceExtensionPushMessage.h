// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDTESTFLIGHTSERVICEEXTENSIONPUSHMESSAGE_H
#define ASDTESTFLIGHTSERVICEEXTENSIONPUSHMESSAGE_H

@class NSDate, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDTestFlightServiceExtensionPushMessage : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(id)arg0 userInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif