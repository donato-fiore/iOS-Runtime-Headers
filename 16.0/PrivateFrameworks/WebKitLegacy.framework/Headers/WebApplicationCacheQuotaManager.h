// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBAPPLICATIONCACHEQUOTAMANAGER_H
#define WEBAPPLICATIONCACHEQUOTAMANAGER_H

@protocol WebQuotaManager;

#import <Foundation/Foundation.h>

#import "WebSecurityOrigin.h"

@interface WebApplicationCacheQuotaManager : NSObject <WebQuotaManager>

 {
    WebSecurityOrigin *_origin;
}




-(NSUInteger)quota;
-(NSUInteger)usage;
-(id)initWithOrigin:(id)arg0 ;
-(id)origin;
-(void)setQuota:(NSUInteger)arg0 ;


@end


#endif