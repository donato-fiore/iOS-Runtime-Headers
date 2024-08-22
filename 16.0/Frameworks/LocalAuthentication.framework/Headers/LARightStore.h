// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LARIGHTSTORE_H
#define LARIGHTSTORE_H

@protocol LAKeyStore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LARightStore : NSObject {
    id<LAKeyStore> *_keyStore;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUInteger _instanceID;
}




+(id)sharedStore;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)removeAllRightsWithCompletion:(id)arg0 ;
-(void)removeRight:(id)arg0 completion:(id)arg1 ;
-(void)removeRightForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)rightForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)saveRight:(id)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)saveRight:(id)arg0 identifier:(id)arg1 secret:(id)arg2 completion:(id)arg3 ;


@end


#endif