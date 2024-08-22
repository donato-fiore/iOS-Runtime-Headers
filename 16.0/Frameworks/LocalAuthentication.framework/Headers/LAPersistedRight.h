// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAPERSISTEDRIGHT_H
#define LAPERSISTEDRIGHT_H

@class NSArray;


#import "LARight.h"
#import "LAPrivateKey.h"
#import "LASecret.h"

@interface LAPersistedRight : LARight {
    NSArray *_secrets;
    NSArray *_privateKeys;
}


@property (readonly, nonatomic) LAPrivateKey *key;
@property (readonly, nonatomic) LASecret *secret;


-(id)initWithIdentifier:(id)arg0 accessKey:(id)arg1 privateKeys:(id)arg2 secrets:(id)arg3 ;


@end


#endif