// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOCONFIGURATION_H
#define SOCONFIGURATION_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SOConfiguration : NSObject <NSSecureCoding>

 {
    NSArray *_profiles;
}


@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) NSArray *profiles;


+(BOOL)supportsSecureCoding;
+(id)stringWithHandleResult:(NSInteger)arg0 ;
-(BOOL)_matchHost:(id)arg0 inCredentialProfile:(id)arg1 ;
-(BOOL)willHandleURL:(id)arg0 responseCode:(NSInteger)arg1 callerBundleIdentifier:(id)arg2 ;
-(NSInteger)willHandleURL:(id)arg0 responseCode:(NSInteger)arg1 callerBundleIdentifier:(id)arg2 profile:(*id)arg3 ;
-(id)_profileForURLWithHostScheme:(id)arg0 ;
-(id)_profileForURLWithRealmScheme:(id)arg0 ;
-(id)_profileForURLWithSSOIDScheme:(id)arg0 ;
-(id)_profileForURLWithStandardScheme:(id)arg0 isCredential:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfiles:(id)arg0 ;
-(id)profileForURL:(id)arg0 responseCode:(NSInteger)arg1 ;
-(id)realms;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif