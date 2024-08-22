// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVPROVISIONALRESOURCEMANAGER_H
#define CKVPROVISIONALRESOURCEMANAGER_H

@class NSString, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKVProvisionalResourceManager : NSObject {
    NSString *_resourceName;
    NSObject<OS_dispatch_queue> *_activationQueue;
    NSObject<OS_dispatch_queue> *_expirationQueue;
    NSObject<OS_dispatch_queue> *_operationQueue;
    CGFloat _expirationInterval;
    BOOL _isActive;
    id *_activationBlock;
    id *_deactivationBlock;
    NSInteger _operationsInProgress;
}


@property (retain) NSDate *expirationDate; // ivar: _expirationDate


-(BOOL)isActive;
-(NSInteger)activateWithError:(*id)arg0 operationBlock:(id)arg1 ;
-(NSInteger)deactivateWithError:(*id)arg0 ;
-(id)init;
// -(id)initWithResourceName:(id)arg0 lifespan:(CGFloat)arg1 activationBlock:(id)arg2 deactivationBlock:(unk)arg3 serializeOperations:(id)arg4  ;
-(void)_setExpirationTimer;
-(void)activateAsyncWithCompletion:(id)arg0 ;


@end


#endif