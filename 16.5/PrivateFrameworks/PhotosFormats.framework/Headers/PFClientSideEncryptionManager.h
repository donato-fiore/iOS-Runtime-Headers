// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLIENTSIDEENCRYPTIONMANAGER_H
#define PFCLIENTSIDEENCRYPTIONMANAGER_H

@class NSString, NSData, NSDictionary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PFClientSideEncryptionManager : NSObject {
    NSString *_keychainAccessGroup;
    NSString *_keychainApplicationLabel;
    NSString *_keychainViewHint;
    os_unfair_lock_s _lock;
    NSUInteger _state;
    NSData *_keyData;
    NSDictionary *_keyMetadata;
    NSObject<OS_os_log> *_logHandle;
}


@property (readonly) BOOL isReady; // ivar: _isReady


+(id)currentDeviceIdentifier;
+(id)currentDeviceName;
-(BOOL)createKeychainEntryReturningKeyData:(*id)arg0 keyInfo:(*id)arg1 ;
-(BOOL)findExistingKeychainEntryReturningKeyData:(*id)arg0 keyInfo:(*id)arg1 ;
-(BOOL)unarchiveDirectoryAtURL:(id)arg0 error:(*id)arg1 ;
-(id)configurationForProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
// -(void)archiveDirectoryAtURL:(id)arg0 toOutputURL:(id)arg1 dataType:(NSInteger)arg2 options:(id)arg3 entryPredicate:(id)arg4 completionHandler:(unk)arg5  ;
-(void)shutdownWithCompletionHandler:(id)arg0 ;
-(void)start;


@end


#endif