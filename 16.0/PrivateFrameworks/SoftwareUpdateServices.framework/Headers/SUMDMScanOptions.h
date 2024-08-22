// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUMDMSCANOPTIONS_H
#define SUMDMSCANOPTIONS_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "SUOptionsBase.h"
#import "SUScanOptions.h"

@interface SUMDMScanOptions : SUOptionsBase <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger MDMSoftwareUpdatePath;
@property (readonly, nonatomic) NSUInteger delayPeriodDays;
@property (readonly, retain, nonatomic) NSString *requestedProductMarketingVersion;
@property (retain, nonatomic) SUScanOptions *scanOptions; // ivar: _scanOptions
@property (readonly, nonatomic) BOOL useDelayPeriod;


+(BOOL)supportsSecureCoding;
-(BOOL)delayRestrictionEnabled;
-(NSUInteger)MCPathToSUMDMPath:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScanOption:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif