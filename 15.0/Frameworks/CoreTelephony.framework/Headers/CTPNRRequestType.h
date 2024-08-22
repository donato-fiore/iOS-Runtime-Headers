// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTPNRREQUESTTYPE_H
#define CTPNRREQUESTTYPE_H

@class NSNumber, NSArray, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTPNRRequestType : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *attemptCount; // ivar: _attemptCount
@property (retain, nonatomic) NSArray *pnrReqList; // ivar: _pnrReqList
@property (retain, nonatomic) NSData *pushToken; // ivar: _pushToken


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCTPNRRequestType:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif