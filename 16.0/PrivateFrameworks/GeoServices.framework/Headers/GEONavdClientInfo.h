// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEONAVDCLIENTINFO_H
#define GEONAVDCLIENTINFO_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOApplicationAuditToken.h"

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (copy, nonatomic) NSString *canonicalName; // ivar: _canonicalName
@property (copy, nonatomic) NSString *uniqueClientId; // ivar: _uniqueClientId


+(BOOL)supportsSecureCoding;
+(id)clientInfoForNavdPredictions;
-(BOOL)isCalendarClientInfo;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNavdClientInfo;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCanonicalName:(id)arg0 instanceId:(NSUInteger)arg1 ;
-(id)initWithCanonicalName:(id)arg0 instanceId:(NSUInteger)arg1 auditToken:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif