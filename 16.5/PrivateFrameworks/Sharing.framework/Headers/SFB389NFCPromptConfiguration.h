// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFB389NFCPROMPTCONFIGURATION_H
#define SFB389NFCPROMPTCONFIGURATION_H

@class NSUUID, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFB389NFCPromptConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSUUID *baUUID; // ivar: _baUUID
@property (retain, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (nonatomic) NSUInteger promptState; // ivar: _promptState
@property (retain, nonatomic) NSString *userMessage; // ivar: _userMessage


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif