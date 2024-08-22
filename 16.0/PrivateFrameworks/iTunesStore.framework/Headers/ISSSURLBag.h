// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISSSURLBAG_H
#define ISSSURLBAG_H

@class SSURLBag, NSMutableArray;


#import "ISURLBag.h"
#import "ISLoadURLBagOperation.h"

@interface ISSSURLBag : SSURLBag {
    ISURLBag *_bag;
    NSMutableArray *_completionBlocks;
    BOOL _forceInvalidationForNextLoad;
    ISLoadURLBagOperation *_operation;
}




+(id)URLBagForContext:(id)arg0 ;
-(id)existingBagDictionary;
-(id)storeFrontIdentifier;
-(id)valueForKey:(id)arg0 error:(*id)arg1 ;
-(void)_enqueueOperationWithContext:(id)arg0 completionBlock:(id)arg1 ;
-(void)_finishOperationWithURLBag:(id)arg0 error:(id)arg1 ;
-(void)getTrustForURL:(id)arg0 completionBlock:(id)arg1 ;
-(void)invalidate;
-(void)loadValueForKey:(id)arg0 completionBlock:(id)arg1 ;
-(void)loadWithCompletionBlock:(id)arg0 ;


@end


#endif