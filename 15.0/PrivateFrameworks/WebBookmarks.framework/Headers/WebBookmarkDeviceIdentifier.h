// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBBOOKMARKDEVICEIDENTIFIER_H
#define WEBBOOKMARKDEVICEIDENTIFIER_H

@class NSURL, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface WebBookmarkDeviceIdentifier : NSObject {
    NSURL *_plistURL;
    NSUUID *_UUID;
    BOOL _encounteredErrorWhileObtainingUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_fileMonitor;
}


@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) BOOL encounteredErrorWhileObtainingUUID;
@property (nonatomic, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly


+(void)_postWebBookmarkMetaDataChangeDistributedNotification:(id)arg0 ;
+(void)clearDeviceIdentifierWithPlistURL:(id)arg0 ;
-(id)description;
-(id)initWithPlistURL:(id)arg0 readOnly:(BOOL)arg1 ;
-(void)_cancelMonitoringMetaDataFile;
-(void)_createOrLoadMetaData;
-(void)_metaDataDidChange:(id)arg0 ;
-(void)_registerForMedadaDataFileChangeDistributedNotification;
-(void)_resumeMonitoringMetaDataFile;
-(void)_setUpWithPlistURL:(id)arg0 readOnly:(BOOL)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)stopObservingChanges;


@end


#endif