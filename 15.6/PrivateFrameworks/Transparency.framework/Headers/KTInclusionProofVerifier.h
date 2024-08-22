// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTINCLUSIONPROOFVERIFIER_H
#define KTINCLUSIONPROOFVERIFIER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "KTApplicationPublicKeyStore.h"

@interface KTInclusionProofVerifier : NSObject

@property (retain) NSString *application; // ivar: _application
@property (readonly) KTApplicationPublicKeyStore *keyStore; // ivar: _keyStore


-(NSUInteger)verifyInclusionProofWithMapEntry:(id)arg0 perAppLogEntry:(id)arg1 topLevelTreeEntry:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)verifyPerApplicationTreeEntry:(id)arg0 mapHead:(id)arg1 topLevelTreeEntry:(id)arg2 error:(*id)arg3 ;
-(id)initWithKeyStore:(id)arg0 application:(id)arg1 ;
-(void)setInclusionVerifiedForMapHead:(id)arg0 ;


@end


#endif