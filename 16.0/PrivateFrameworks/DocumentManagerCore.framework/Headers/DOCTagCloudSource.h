// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCTAGCLOUDSOURCE_H
#define DOCTAGCLOUDSOURCE_H

@class NSUbiquitousKeyValueStore;
@protocol DOCTagRegistryProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DOCTagCloudSource : NSObject

@property (retain, nonatomic) NSObject *iCloudToken; // ivar: _iCloudToken
@property (retain, nonatomic) NSUbiquitousKeyValueStore *store; // ivar: _store
@property (weak, nonatomic) NSObject<DOCTagRegistryProtocol> *tagRegistry; // ivar: _tagRegistry
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // ivar: _workingQueue


-(NSInteger)iCloudTagSerialNumber;
-(NSInteger)iCloudTagVersion;
-(id)iCloudTags;
-(id)iCloudTagsDictionary;
-(id)initWithTagRegistry:(id)arg0 ;
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