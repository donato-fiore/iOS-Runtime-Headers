// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USWEBUSAGEREPORT_H
#define USWEBUSAGEREPORT_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USWebUsageReport : NSObject <NSSecureCoding>



@property (readonly, copy) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly) CGFloat totalUsageTime; // ivar: _totalUsageTime
@property (readonly, copy) NSDictionary *webUsageByDomain; // ivar: _webUsageByDomain
@property (readonly) BOOL webUsageTrusted; // ivar: _webUsageTrusted


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomainIdentifier:(id)arg0 totalUsageTime:(CGFloat)arg1 webUsageByDomain:(id)arg2 ;
-(id)initWithDomainIdentifier:(id)arg0 webUsageTrusted:(BOOL)arg1 totalUsageTime:(CGFloat)arg2 webUsageByDomain:(id)arg3 ;
-(void)_usWebUsageReportCommonInitWithDomainIdentifier:(id)arg0 webUsageTrusted:(BOOL)arg1 totalUsageTime:(CGFloat)arg2 webUsageByDomain:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif