// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNAUTOSHORTCUTLOCALIZEDPHRASE_H
#define LNAUTOSHORTCUTLOCALIZEDPHRASE_H

@class NSXPCConnection, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNAutoShortcutLocalizedPhrase : NSObject <NSSecureCoding>

 {
    NSXPCConnection *_connection;
}


@property (readonly, copy, nonatomic) NSString *basePhraseTemplate; // ivar: _basePhraseTemplate
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *localizedPhrase; // ivar: _localizedPhrase
@property (readonly, copy, nonatomic) NSUUID *parameterIdentifier; // ivar: _parameterIdentifier
@property (readonly, nonatomic, getter=isPrimary) BOOL primary; // ivar: _primary
@property (readonly, nonatomic) NSString *signature; // ivar: _signature


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalizedPhrase:(id)arg0 bundleIdentifier:(id)arg1 basePhraseTemplate:(id)arg2 parameterIdentifier:(id)arg3 ;
-(id)initWithLocalizedPhrase:(id)arg0 bundleIdentifier:(id)arg1 basePhraseTemplate:(id)arg2 parameterIdentifier:(id)arg3 primary:(BOOL)arg4 ;
-(id)initWithLocalizedPhrase:(id)arg0 bundleIdentifier:(id)arg1 basePhraseTemplate:(id)arg2 parameterIdentifier:(id)arg3 primary:(BOOL)arg4 signature:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif