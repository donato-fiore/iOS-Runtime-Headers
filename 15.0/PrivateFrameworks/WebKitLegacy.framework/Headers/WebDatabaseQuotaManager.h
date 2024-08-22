// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBDATABASEQUOTAMANAGER_H
#define WEBDATABASEQUOTAMANAGER_H

@protocol WebQuotaManager;

#import <Foundation/Foundation.h>

#import "WebSecurityOrigin.h"

@interface WebDatabaseQuotaManager : NSObject <WebQuotaManager>

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