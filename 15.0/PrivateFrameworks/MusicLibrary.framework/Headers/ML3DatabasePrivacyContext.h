// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3DATABASEPRIVACYCONTEXT_H
#define ML3DATABASEPRIVACYCONTEXT_H

@class PAApplication;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ML3DatabasePrivacyContext : NSObject <NSSecureCoding>

 {
    PAApplication *_clientApplication;
}




+(BOOL)supportsSecureCoding;
+(id)contextForCurrentProcess;
+(void)logDatabasePrivacyAccessWithAuditToken:(struct ? )arg0 ;
-(id)initWithClientIdentity:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logDatabasePrivacyAccess;


@end


#endif