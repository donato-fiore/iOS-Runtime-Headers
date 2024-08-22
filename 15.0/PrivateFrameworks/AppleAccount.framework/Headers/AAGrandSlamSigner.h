// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAGRANDSLAMSIGNER_H
#define AAGRANDSLAMSIGNER_H

@class NSString, ACAccountStore, ACAccount;

#import <Foundation/Foundation.h>


@interface AAGrandSlamSigner : NSObject {
    NSString *_appTokenID;
}


@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) ACAccount *grandSlamAccount; // ivar: _grandSlamAccount
@property (retain, nonatomic) NSString *headerFieldKey; // ivar: _headerFieldKey
@property (nonatomic) BOOL useAltDSID; // ivar: _useAltDSID


-(BOOL)signURLRequest:(id)arg0 ;
-(BOOL)signURLRequest:(id)arg0 isUserInitiated:(BOOL)arg1 ;
-(id)initWithAccountStore:(id)arg0 grandSlamAccount:(id)arg1 appTokenID:(id)arg2 ;
-(id)initWithAppleAccount:(id)arg0 grandSlamAccount:(id)arg1 accountStore:(id)arg2 appTokenID:(id)arg3 ;


@end


#endif