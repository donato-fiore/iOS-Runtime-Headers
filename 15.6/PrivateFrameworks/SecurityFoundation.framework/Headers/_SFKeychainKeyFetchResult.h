// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFKEYCHAINKEYFETCHRESULT_H
#define _SFKEYCHAINKEYFETCHRESULT_H

@class SFKeychainFetchResult;


#import "_SFSymmetricKey.h"

@interface _SFKeychainKeyFetchResult : SFKeychainFetchResult {
    id *_keyFetchResult;
}


@property (readonly) _SFSymmetricKey *value;


-(void)fetchValueWithAuthenticationContext:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif