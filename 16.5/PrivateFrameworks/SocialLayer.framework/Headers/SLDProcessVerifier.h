// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDPROCESSVERIFIER_H
#define SLDPROCESSVERIFIER_H


#import <Foundation/Foundation.h>


@interface SLDProcessVerifier : NSObject {
    ? useStaticKeyForTesting;
    ? $__lazy_storage_$_staticTestingKey;
}




+(id)tagDataFromString:(id)arg0 ;
-(id)init;
-(id)signProcess:(id)arg0 tag:(id)arg1 error:(*id)arg2 ;
-(id)verifyData:(id)arg0 tag:(id)arg1 error:(*id)arg2 ;


@end


#endif