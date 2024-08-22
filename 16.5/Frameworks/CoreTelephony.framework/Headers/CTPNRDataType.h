// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTPNRDATATYPE_H
#define CTPNRDATATYPE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTPNRDataType : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *destAddr; // ivar: _destAddr
@property (nonatomic) NSInteger pnrMechanism; // ivar: _pnrMechanism
@property (retain, nonatomic) NSString *svcCenterAddr; // ivar: _svcCenterAddr


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCTPNRDataType:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif