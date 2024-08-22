// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWCTRACKINGDOMAININFO_H
#define _SWCTRACKINGDOMAININFO_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SWCTrackingDomainInfo : NSObject <NSSecureCoding>

 {
    NSDictionary *_JSONObject;
}


@property (readonly) NSString *domain; // ivar: _domain
@property (readonly) NSString *ownerDisplayName;
@property (readonly) NSString *ownerName;
@property (readonly) NSUInteger source;


+(BOOL)supportsSecureCoding;
+(id)_queue;
+(id)_trackingDomainInfoWithDomain:(id)arg0 JSONObject:(id)arg1 ;
+(id)_trackingDomainInfoWithDomain:(id)arg0 JSONObject:(id)arg1 expectedSources:(NSUInteger)arg2 ;
+(id)_trackingDomainInfoWithDomains:(id)arg0 ;
+(id)_trackingDomainInfoWithDomains:(id)arg0 sources:(NSUInteger)arg1 ;
+(id)lastDatabaseUpdate;
+(id)new;
+(id)trackingDomainInfoWithDomains:(id)arg0 ;
+(void)_getTrackingDomainInfoWithDomains:(id)arg0 sources:(NSUInteger)arg1 completionHandler:(id)arg2 ;
+(void)getTrackingDomainInfoWithDomains:(id)arg0 sources:(NSUInteger)arg1 completion:(id)arg2 ;
-(id)_initWithDomain:(id)arg0 JSONObject:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif