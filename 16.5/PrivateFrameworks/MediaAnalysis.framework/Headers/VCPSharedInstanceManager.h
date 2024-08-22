// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPSHAREDINSTANCEMANAGER_H
#define VCPSHAREDINSTANCEMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCPSharedInstanceManager : NSObject {
    NSObject<OS_dispatch_queue> *serialQueue_;
    NSMutableDictionary *sharedInstances_;
}




+(id)sharedManager;
-(id)init;
-(id)sharedInstanceWithIdentifier:(id)arg0 andCreationBlock:(id)arg1 ;
-(void)reset;
-(void)resetSharedInstanceWithIdentifier:(id)arg0 ;


@end


#endif