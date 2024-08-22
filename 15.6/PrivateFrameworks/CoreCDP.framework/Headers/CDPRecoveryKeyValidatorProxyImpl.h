// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPRECOVERYKEYVALIDATORPROXYIMPL_H
#define CDPRECOVERYKEYVALIDATORPROXYIMPL_H

@class NSString;
@protocol CDPRecoveryKeyValidator;

#import <Foundation/Foundation.h>


@interface CDPRecoveryKeyValidatorProxyImpl : NSObject <CDPRecoveryKeyValidator>

 {
    id<CDPRecoveryKeyValidator> *_validator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)confirmRecoveryKey:(id)arg0 error:(*id)arg1 ;
-(id)generateRecoveryKeyWithError:(*id)arg0 ;
-(id)initWithRemoteObject:(id)arg0 ;
-(void)confirmRecoveryKey:(id)arg0 completion:(id)arg1 ;
-(void)generateRecoveryKey:(id)arg0 ;


@end


#endif