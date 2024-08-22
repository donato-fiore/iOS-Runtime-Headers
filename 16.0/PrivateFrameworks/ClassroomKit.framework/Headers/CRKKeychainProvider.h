// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKKEYCHAINPROVIDER_H
#define CRKKEYCHAINPROVIDER_H

@protocol CRKKeychain;

#import <Foundation/Foundation.h>


@interface CRKKeychainProvider : NSObject

@property (readonly, nonatomic) NSObject<CRKKeychain> *keychain; // ivar: _keychain


+(id)makeKeychainForCurrentEnvironment;
+(id)sharedProvider;
-(id)initWithKeychain:(id)arg0 ;


@end


#endif