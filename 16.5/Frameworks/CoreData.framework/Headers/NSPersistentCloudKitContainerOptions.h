// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPERSISTENTCLOUDKITCONTAINEROPTIONS_H
#define NSPERSISTENTCLOUDKITCONTAINEROPTIONS_H

@class NSString, CKContainer;
@protocol NSCloudKitMirroringDelegateProgressProvider;

#import <Foundation/Foundation.h>


@interface NSPersistentCloudKitContainerOptions : NSObject

@property (retain, nonatomic) NSString *apsConnectionMachServiceName; // ivar: _apsConnectionMachServiceName
@property (readonly, copy) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property (weak, nonatomic) NSObject<NSCloudKitMirroringDelegateProgressProvider> *progressProvider; // ivar: _progressProvider
@property (retain, nonatomic) CKContainer *testContainerOverride; // ivar: _testContainerOverride
@property BOOL useDeviceToDeviceEncryption; // ivar: _useDeviceToDeviceEncryption
@property BOOL useEncryptedStorage;


-(id)initWithContainer:(id)arg0 ;
-(id)initWithContainerIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif