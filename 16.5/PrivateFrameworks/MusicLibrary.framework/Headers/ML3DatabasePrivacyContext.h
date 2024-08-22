// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3DATABASEPRIVACYCONTEXT_H
#define ML3DATABASEPRIVACYCONTEXT_H

@class PAApplication, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ML3DatabasePrivacyContext : NSObject <NSSecureCoding>

 {
    PAApplication *_clientApplication;
}


@property (readonly, nonatomic) NSString *bundleID;


+(BOOL)supportsSecureCoding;
+(id)sharedContext;
+(void)logDatabasePrivacyAccessWithAuditToken:(struct ? )arg0 ;
-(id)init;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithClientIdentity:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPAApplication:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logDatabasePrivacyAccess;


@end


#endif