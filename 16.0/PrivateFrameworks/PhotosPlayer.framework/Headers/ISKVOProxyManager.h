// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISKVOPROXYMANAGER_H
#define ISKVOPROXYMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ISKVOProxyManager : NSObject {
    NSMutableDictionary *_recordsByIdentifier;
    NSObject<OS_dispatch_queue> *_recordsQueue;
}




+(id)sharedManager;
-(id)addProxyWithTarget:(id)arg0 queue:(id)arg1 keyPaths:(id)arg2 delegate:(id)arg3 ;
-(id)init;
-(void)removeProxyWithIdentifier:(id)arg0 ;


@end


#endif