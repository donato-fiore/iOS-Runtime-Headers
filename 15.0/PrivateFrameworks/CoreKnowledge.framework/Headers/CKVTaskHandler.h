// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVTASKHANDLER_H
#define CKVTASKHANDLER_H

@class NSString;
@protocol CKVDonateTaskProvider;

#import <Foundation/Foundation.h>

#import "CKVSettings.h"
#import "CKVTaskCoalescenceManager.h"
#import "CKVIndexManager.h"
#import "CKVTaskController.h"

@interface CKVTaskHandler : NSObject {
    NSString *_handlerName;
    CKVSettings *_settings;
    NSObject<CKVDonateTaskProvider> *_donateTaskProvider;
    CKVTaskCoalescenceManager *_coalescenceManager;
    CKVIndexManager *_indexManager;
}


@property (readonly, nonatomic) CKVTaskController *taskController; // ivar: _taskController


-(id)initWithHandlerName:(id)arg0 settings:(id)arg1 donateTaskProvider:(id)arg2 coalescenceManager:(id)arg3 indexManager:(id)arg4 taskController:(id)arg5 ;
-(void)_clearAllDisabledDatasetsWithReason:(unsigned short)arg0 ;
-(void)_donateAllDatasetsWithReason:(unsigned short)arg0 completion:(id)arg1 ;
-(void)_donateAppInfoIfEnabled:(unsigned short)arg0 completion:(id)arg1 ;
-(void)_donateContactsIfEnabled:(unsigned short)arg0 completion:(id)arg1 ;
-(void)_donateCustomVocabularyIfEnabled:(unsigned short)arg0 completion:(id)arg1 ;
-(void)_donateHomeKitIfEnabled:(unsigned short)arg0 completion:(id)arg1 ;
-(void)_donateMediaIfEnabled:(unsigned short)arg0 completion:(id)arg1 ;
-(void)_runMigration:(id)arg0 ;
// -(void)_submitTask:(unsigned short)arg0 reason:(unsigned short)arg1 taskBlock:(id)arg2 completion:(unk)arg3  ;
-(void)enableSimulatedTasks:(BOOL)arg0 ;
-(void)handleAddressBookChange:(id)arg0 ;
-(void)handleHomeKitChange:(id)arg0 ;
-(void)handleINVocabularyChange:(id)arg0 ;
-(void)handleLSApplicationChange:(id)arg0 ;
-(void)handleMediaPlayerChange:(id)arg0 ;
-(void)handleSiriLanguageCodeChange:(id)arg0 ;
-(void)handleSiriSettingsChange:(id)arg0 ;
-(void)runIndexMaintenance:(id)arg0 ;
-(void)runMigration:(id)arg0 ;


@end


#endif