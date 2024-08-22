// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19APPSTOREKITINTERNAL25JSMEDIATOKENSERVICEOBJECT_H
#define _TTC19APPSTOREKITINTERNAL25JSMEDIATOKENSERVICEOBJECT_H

@class NSString;
@protocol _TtP19AppStoreKitInternalP33_73C5B74C0FEB36A3CCE5977665A2F73832JSMediaTokenServiceObjectExports_;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal25JSMediaTokenServiceObject : NSObject <_TtP19AppStoreKitInternalP33_73C5B74C0FEB36A3CCE5977665A2F73832JSMediaTokenServiceObjectExports_>

 {
    ? tokenService;
}


@property (nonatomic, readonly) NSString *tokenString;


-(id)init;
-(id)overrideToken:(id)arg0 ;
-(id)refreshToken;
-(void)resetToken;


@end


#endif