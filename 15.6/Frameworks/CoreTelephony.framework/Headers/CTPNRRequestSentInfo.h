// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTPNRREQUESTSENTINFO_H
#define CTPNRREQUESTSENTINFO_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTPNRRequestSentInfo : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL success; // ivar: _success
@property (retain, nonatomic) NSNumber *timeout; // ivar: _timeout
@property (retain, nonatomic) NSString *token; // ivar: _token


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCTPNRRequestSentInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif