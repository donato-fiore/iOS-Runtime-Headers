// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUIBUCKETSENDERCLOUDSTORAGE_H
#define MUIBUCKETSENDERCLOUDSTORAGE_H

@class NSString;
@protocol EMUbiquitouslyPersistedDictionaryDelegate_Private, EMMutableDictionaryProtocol, MUIBucketSenderCloudStorageDelegate;

#import <Foundation/Foundation.h>


@interface MUIBucketSenderCloudStorage : NSObject <EMUbiquitouslyPersistedDictionaryDelegate_Private>

 {
    id<EMMutableDictionaryProtocol> *_persistentDictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<MUIBucketSenderCloudStorageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_addressToUseFromAddress:(id)arg0 ;
-(id)_mergeChangesForRemotelyChangedKeys:(id)arg0 localStore:(id)arg1 cloudStore:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithMutableDictionary:(id)arg0 delegate:(id)arg1 ;
-(void)_removeSenderWithEmailAddresses:(id)arg0 ;
-(void)moveSender:(id)arg0 toBucket:(NSInteger)arg1 userInitiated:(BOOL)arg2 ;
-(void)moveSenderWithEmailAddresses:(id)arg0 toBucket:(NSInteger)arg1 userInitiated:(BOOL)arg2 ;
-(void)persistedDictionaryDidChangeRemotelyWithChangedItems:(id)arg0 deletedItems:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeSender:(id)arg0 ;


@end


#endif