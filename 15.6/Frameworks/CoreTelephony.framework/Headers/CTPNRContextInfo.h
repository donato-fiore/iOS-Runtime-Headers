// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTPNRCONTEXTINFO_H
#define CTPNRCONTEXTINFO_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTPNRContextInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *imsi; // ivar: _imsi
@property (nonatomic) BOOL isReady; // ivar: _isReady
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (retain, nonatomic) NSString *phoneNumberOnSIM; // ivar: _phoneNumberOnSIM
@property (retain, nonatomic) NSString *plmn; // ivar: _plmn


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPNRContextInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif