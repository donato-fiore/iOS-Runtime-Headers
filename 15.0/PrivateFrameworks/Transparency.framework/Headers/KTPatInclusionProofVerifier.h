// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KTPATINCLUSIONPROOFVERIFIER_H
#define KTPATINCLUSIONPROOFVERIFIER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "KTApplicationPublicKeyStore.h"

@interface KTPatInclusionProofVerifier : NSObject

@property (retain) NSString *application; // ivar: _application
@property (readonly) KTApplicationPublicKeyStore *keyStore; // ivar: _keyStore


-(NSUInteger)verifyPatInclusionProofWithPerAppLogEntry:(id)arg0 topLevelTreeEntry:(id)arg1 error:(*id)arg2 ;
-(id)initWithKeyStore:(id)arg0 application:(id)arg1 ;


@end


#endif