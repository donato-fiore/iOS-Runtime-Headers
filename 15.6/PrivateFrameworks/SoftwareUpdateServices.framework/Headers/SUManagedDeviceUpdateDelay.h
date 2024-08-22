// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUMANAGEDDEVICEUPDATEDELAY_H
#define SUMANAGEDDEVICEUPDATEDELAY_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SUManagedDeviceUpdateDelay : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger delayPeriod; // ivar: _delayPeriod
@property (retain, nonatomic) NSDate *delayedStartDate; // ivar: _delayedStartDate
@property (nonatomic) BOOL isDelayed; // ivar: _isDelayed


+(BOOL)supportsSecureCoding;
-(NSUInteger)delayUnit;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)delayEndDate;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelay:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif