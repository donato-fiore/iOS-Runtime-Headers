// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19APPSTOREKITINTERNAL8JSCOOKIE_H
#define _TTC19APPSTOREKITINTERNAL8JSCOOKIE_H

@class NSString, NSDate;
@protocol _TtP19AppStoreKitInternalP33_095193B53855FE0B901F92B98AF8CE3715JSCookieExports_;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal8JSCookie : NSObject <_TtP19AppStoreKitInternalP33_095193B53855FE0B901F92B98AF8CE3715JSCookieExports_>

 {
    ? name;
    ? value;
    ? expiresDate;
    ? domain;
    ? path;
}


@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSDate *expiresDate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *value;


-(id)init;


@end


#endif