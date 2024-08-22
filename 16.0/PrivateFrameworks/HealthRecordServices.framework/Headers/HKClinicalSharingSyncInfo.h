// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALSHARINGSYNCINFO_H
#define HKCLINICALSHARINGSYNCINFO_H

@class NSSet, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKClinicalSharingSyncInfo : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSSet *accountIdentifiers; // ivar: _accountIdentifiers
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 accountIdentifiers:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif