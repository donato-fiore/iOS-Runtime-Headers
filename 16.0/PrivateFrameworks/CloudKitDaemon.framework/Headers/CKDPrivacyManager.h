// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPRIVACYMANAGER_H
#define CKDPRIVACYMANAGER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDPrivacyManager : NSObject

@property (retain, nonatomic) NSMutableSet *operations; // ivar: _operations
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privacyManagerQueue; // ivar: _privacyManagerQueue


+(id)sharedManager;
-(id)_init;
-(id)init;
-(void)_resetPrivacySettingsForAppContainerAccountTuple:(id)arg0 completionHandler:(id)arg1 ;
-(void)resetPrivacySettingsWithCompletionHandler:(id)arg0 ;


@end


#endif