// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLPERSONIDENTITYGENERATOR_H
#define SLPERSONIDENTITYGENERATOR_H


#import <Foundation/Foundation.h>


@interface SLPersonIdentityGenerator : NSObject {
    ? queue;
    ? keyQueryController;
}




-(?)generateLocalIdentityForDocumentIdentifiercompletionHandler;
-(?)generatePersonIdentitiesForHandles:(?)arg0 documentIdentifiercompletionHandler;
-(?)generateProofForIdentity:(?)arg0 documentIdentifiercompletionHandler;
-(?)signData:(?)arg0 documentIdentifier:(?)arg1 trackingPreventionSaltcompletionHandler;
-(id)init;
-(id)initWithQueue:(id)arg0 ;


@end


#endif