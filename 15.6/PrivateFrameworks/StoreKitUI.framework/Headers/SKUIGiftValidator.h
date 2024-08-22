// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGIFTVALIDATOR_H
#define SKUIGIFTVALIDATOR_H

@class SSVLoadURLOperation, NSURL, NSOperationQueue;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUIGiftValidator : NSObject {
    SKUIClientContext *_clientContext;
    NSInteger _validationCount;
    SSVLoadURLOperation *_validationOperation;
    NSURL *_validationURL;
}


@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic, getter=isValidating) BOOL validating;


-(id)initWithValidationURL:(id)arg0 clientContext:(id)arg1 ;
-(void)_finishValidationWithResponse:(id)arg0 error:(id)arg1 attemptNumber:(NSInteger)arg2 block:(id)arg3 ;
-(void)_validateWithBodyDictionary:(id)arg0 completionBlock:(id)arg1 ;
-(void)cancelValidation;
-(void)validateDonation:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)validateGift:(id)arg0 withCompletionBlock:(id)arg1 ;


@end


#endif