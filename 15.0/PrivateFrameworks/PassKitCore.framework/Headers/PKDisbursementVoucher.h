// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDISBURSEMENTVOUCHER_H
#define PKDISBURSEMENTVOUCHER_H

@class NSData, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKDisbursementVoucher : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSURL *redemptionURL; // ivar: _redemptionURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDisbursementVoucher:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif