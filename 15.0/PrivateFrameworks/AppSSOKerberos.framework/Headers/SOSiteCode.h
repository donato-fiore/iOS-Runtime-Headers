// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOSITECODE_H
#define SOSITECODE_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SOSiteCode : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *code; // ivar: _code
@property (readonly, nonatomic) NSString *networkFingerprint; // ivar: _networkFingerprint
@property (readonly, nonatomic) NSDate *timeStamp; // ivar: _timeStamp


+(BOOL)supportsSecureCoding;
-(CGFloat)age;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSiteCode:(id)arg0 forNetworkFingerprint:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif