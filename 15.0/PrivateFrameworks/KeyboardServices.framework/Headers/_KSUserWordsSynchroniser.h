// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _KSUSERWORDSSYNCHRONISER_H
#define _KSUSERWORDSSYNCHRONISER_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_KSCloudKitManager.h"
#import "_KSControlFileController.h"
#import "_KSSystemTask.h"
#import "_KSRequestThrottle.h"

@interface _KSUserWordsSynchroniser : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    _KSCloudKitManager *_cloudKitManager;
    _KSControlFileController *_controlFile;
    _KSSystemTask *_pushTask;
    BOOL _taskRun;
    NSArray *_languagesIfOffline;
    BOOL _attemptingConnection;
    BOOL _retryPending;
    BOOL _needRetry;
    _KSRequestThrottle *_identityThrottle;
}


@property (retain, nonatomic) NSArray *requiredLanguages;


+(Class)infoClass;
+(id)generateKeyWithSize:(NSUInteger)arg0 ;
+(id)generateRecordNameForFilename:(id)arg0 withKey:(id)arg1 ;
+(id)sharedInstance;
-(BOOL)checkErrors:(id)arg0 ;
-(id)containerID;
-(id)filenameForLanguage:(id)arg0 ;
-(id)generateRecordListForLanguages:(id)arg0 ;
-(id)information;
-(id)init;
-(id)initForTestingWithManager:(id)arg0 enablePushing:(BOOL)arg1 ;
-(id)recordIDForLanguage:(id)arg0 withKey:(id)arg1 ;
-(void)accountDidChange:(id)arg0 ;
-(void)checkConfiguration;
-(void)checkForDownload:(id)arg0 uploads:(id)arg1 allLanguages:(id)arg2 ;
-(void)checkProgress:(int)arg0 withInfo:(id)arg1 ;
-(void)dealloc;
-(void)deleteZoneWithCompletionHandler:(id)arg0 ;
-(void)deltaDownloadForLanguages:(id)arg0 ;
-(void)disable;
-(void)dumpAllRecordsWithCompletionHandler:(id)arg0 ;
-(void)firstTimeDownloadWithKey:(id)arg0 ;
-(void)generateKeyWithCompletionHandler:(id)arg0 ;
-(void)identitiesDidChange:(id)arg0 ;
-(void)keyboardUsed;
-(void)loadKeyWithCompletion:(id)arg0 ;
-(void)modifyInformationWithOperations:(id)arg0 ;
-(void)overwriteFilesWithRecords:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)readFilesWithRecordIDs:(id)arg0 forColumns:(id)arg1 priority:(NSUInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)saveKey:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif