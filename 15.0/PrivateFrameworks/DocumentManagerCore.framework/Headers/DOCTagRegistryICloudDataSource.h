// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCTAGREGISTRYICLOUDDATASOURCE_H
#define DOCTAGREGISTRYICLOUDDATASOURCE_H

@class NSUbiquitousKeyValueStore;
@protocol DOCTagRegistryDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DOCTagRegistryICloudDataSource : NSObject

@property (weak, nonatomic) NSObject<DOCTagRegistryDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject *iCloudToken; // ivar: _iCloudToken
@property (retain, nonatomic) NSUbiquitousKeyValueStore *store; // ivar: _store
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // ivar: _workingQueue


-(NSInteger)iCloudTagSerialNumber;
-(NSInteger)iCloudTagVersion;
-(id)iCloudTags;
-(id)iCloudTagsDictionary;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)iCloudTokenWithCompletionBlock:(id)arg0 ;
-(void)isICloudAvailableWithCompletionBlock:(id)arg0 ;
-(void)kvsStoreDidChange:(id)arg0 ;
-(void)readTagsFromCloud:(BOOL)arg0 ;
-(void)syncTagsWithCloud:(BOOL)arg0 ;
-(void)syncTagsWithCloud:(BOOL)arg0 isICloudAvailable:(BOOL)arg1 ;
-(void)ubiquityIdentityDidChange;
-(void)writeTagsToCloud;


@end


#endif