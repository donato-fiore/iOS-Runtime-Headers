// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFFAIRPLAYROLLOUTCONTROLLER_H
#define PFFAIRPLAYROLLOUTCONTROLLER_H


#import <Foundation/Foundation.h>


@interface PFFairPlayRolloutController : NSObject {
    ? $__lazy_storage_$_internalQueue;
}




+(id)sharedInstance;
-(BOOL)isEnabled;
-(id)init;
-(void)didRollbackStatusChangeWithCompletion:(id)arg0 ;


@end


#endif