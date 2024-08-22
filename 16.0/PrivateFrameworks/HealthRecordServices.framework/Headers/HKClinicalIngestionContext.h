// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALINGESTIONCONTEXT_H
#define HKCLINICALINGESTIONCONTEXT_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKClinicalAccountConnectionInformation.h"

@interface HKClinicalIngestionContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKClinicalAccountConnectionInformation *accountInformation; // ivar: _accountInformation
@property (readonly, copy, nonatomic) NSDate *lastFetchDate; // ivar: _lastFetchDate
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (readonly, nonatomic) NSInteger queryMode; // ivar: _queryMode


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAccountConnectionInformation:(id)arg0 queryMode:(NSInteger)arg1 options:(NSInteger)arg2 lastFetchDate:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif