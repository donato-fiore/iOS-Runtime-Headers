// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFKEYCHAINIDENTITYFETCHRESULT_H
#define _SFKEYCHAINIDENTITYFETCHRESULT_H

@class SFKeychainFetchResult;


#import "_SFIdentity.h"

@interface _SFKeychainIdentityFetchResult : SFKeychainFetchResult {
    id *_identityFetchResult;
}


@property (readonly) _SFIdentity *value;


-(void)fetchValueWithAuthenticationContext:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif