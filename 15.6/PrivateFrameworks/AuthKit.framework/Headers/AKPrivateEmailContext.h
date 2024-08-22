// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKPRIVATEEMAILCONTEXT_H
#define AKPRIVATEEMAILCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKPrivateEmailContext : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *proxiedAppID; // ivar: _proxiedAppID
@property (copy, nonatomic) NSString *proxiedAppName; // ivar: _proxiedAppName
@property (copy, nonatomic) NSString *proxiedBundleIdentifier; // ivar: _proxiedBundleIdentifier
@property (readonly, copy, nonatomic) NSString *upgradeBundleIdentifier; // ivar: _upgradeBundleIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(id)arg0 bundleID:(id)arg1 ;
-(id)initWithContext:(id)arg0 client:(id)arg1 ;
-(id)initWithKey:(id)arg0 ;
-(id)initWithKey:(id)arg0 altDSID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif