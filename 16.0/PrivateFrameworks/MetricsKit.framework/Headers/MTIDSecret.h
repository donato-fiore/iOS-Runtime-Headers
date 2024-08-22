// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTIDSECRET_H
#define MTIDSECRET_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MTIDSecret : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDate *effectiveDate; // ivar: _effectiveDate
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (nonatomic) BOOL isSynchronized; // ivar: _isSynchronized
@property (retain, nonatomic) NSString *syncStatusCode; // ivar: _syncStatusCode
@property (copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugInfo;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 effectiveDate:(id)arg1 expirationDate:(id)arg2 isSynchronize:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif