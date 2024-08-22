// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPLOSTMODEINFO_H
#define SPLOSTMODEINFO_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPLostModeInfo : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *email; // ivar: _email
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessage:(id)arg0 email:(id)arg1 phoneNumber:(id)arg2 timestamp:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif