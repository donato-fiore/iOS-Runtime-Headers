// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPBLOCKRECOVERYATTEMPTER_H
#define FPBLOCKRECOVERYATTEMPTER_H

@class NSError;
@protocol FPXOperationService;

#import <Foundation/Foundation.h>


@interface FPBlockRecoveryAttempter : NSObject {
    id *_recoveryBlock;
    id<FPXOperationService> *_fpxOperationService;
}


@property (weak, nonatomic) NSError *expectedError; // ivar: _expectedError


-(BOOL)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 ;
// -(id)initWithBlock:(id)arg0 operationService:(unk)arg1  ;


@end


#endif