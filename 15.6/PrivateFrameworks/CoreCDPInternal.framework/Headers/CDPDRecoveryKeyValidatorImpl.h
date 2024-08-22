// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPDRECOVERYKEYVALIDATORIMPL_H
#define CDPDRECOVERYKEYVALIDATORIMPL_H

@class CDPContext, NSString;
@protocol CDPRecoveryKeyValidatorInternal, CDPDRecoveryKeyValidatorInternalDelegate;

#import <Foundation/Foundation.h>


@interface CDPDRecoveryKeyValidatorImpl : NSObject <CDPRecoveryKeyValidatorInternal>

 {
    CDPContext *_context;
    id<CDPDRecoveryKeyValidatorInternalDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *recoveryKey; // ivar: _recoveryKey
@property (nonatomic) BOOL recoveryKeyVerified; // ivar: _recoveryKeyVerified
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(void)confirmRecoveryKey:(id)arg0 completion:(id)arg1 ;
-(void)generateRecoveryKey:(id)arg0 ;


@end


#endif