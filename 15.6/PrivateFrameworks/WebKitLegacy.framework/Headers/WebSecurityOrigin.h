// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBSECURITYORIGIN_H
#define WEBSECURITYORIGIN_H

@protocol WebQuotaManager;

#import <Foundation/Foundation.h>


@interface WebSecurityOrigin : NSObject {
    *WebSecurityOriginPrivate _private;
    id<WebQuotaManager> *_applicationCacheQuotaManager;
    id<WebQuotaManager> *_databaseQuotaManager;
}




+(id)webSecurityOriginFromDatabaseIdentifier:(id)arg0 ;
-(*void)_core;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)quota;
-(NSUInteger)usage;
-(id)_initWithWebCoreSecurityOrigin:(*void)arg0 ;
-(id)applicationCacheQuotaManager;
-(id)databaseIdentifier;
-(id)databaseQuotaManager;
-(id)host;
-(id)initWithURL:(id)arg0 ;
-(id)protocol;
-(id)stringValue;
-(id)toString;
-(unsigned short)port;
-(void)dealloc;
-(void)setQuota:(NSUInteger)arg0 ;


@end


#endif