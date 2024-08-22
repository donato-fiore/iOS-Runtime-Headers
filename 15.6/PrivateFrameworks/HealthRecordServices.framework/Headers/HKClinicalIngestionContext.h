// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCLINICALINGESTIONCONTEXT_H
#define HKCLINICALINGESTIONCONTEXT_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HDHRSAccountConnectionInformation.h"

@interface HKClinicalIngestionContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HDHRSAccountConnectionInformation *accountInformation; // ivar: _accountInformation
@property (readonly, copy, nonatomic) NSDate *lastFetchDate; // ivar: _lastFetchDate
@property (readonly, nonatomic) NSInteger options; // ivar: _options


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAccountInformation:(id)arg0 options:(NSInteger)arg1 lastFetchDate:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif