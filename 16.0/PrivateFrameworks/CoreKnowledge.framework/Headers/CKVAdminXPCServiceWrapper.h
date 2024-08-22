// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVADMINXPCSERVICEWRAPPER_H
#define CKVADMINXPCSERVICEWRAPPER_H

@class NSString;
@protocol CKVAdminServiceProvider, CKVAdminService;

#import <Foundation/Foundation.h>

#import "CKVXPCServiceBridge.h"

@interface CKVAdminXPCServiceWrapper : NSObject <CKVAdminServiceProvider, CKVAdminService>

 {
    CKVXPCServiceBridge *_xpcServiceBridge;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)adminService;
-(id)init;
-(void)captureVocabularySnapshot:(id)arg0 completion:(id)arg1 ;
-(void)deleteAllItemsWithUserId:(id)arg0 completion:(id)arg1 ;
-(void)deleteAllItemsWithUserId:(id)arg0 deviceId:(id)arg1 completion:(id)arg2 ;
-(void)enumerateItemsWithBatchSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)finishEventSimulation:(id)arg0 ;
-(void)handleTask:(unsigned short)arg0 reason:(unsigned short)arg1 completion:(id)arg2 ;
-(void)rebuildSpeechProfileForUserId:(id)arg0 completion:(id)arg1 ;
-(void)startEventSimulation:(BOOL)arg0 completion:(id)arg1 ;
-(void)triggerMaintenance:(id)arg0 ;
-(void)triggerMigration:(BOOL)arg0 completeAfterTrigger:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif