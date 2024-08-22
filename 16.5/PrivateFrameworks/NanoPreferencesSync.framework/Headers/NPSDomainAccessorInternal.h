// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPSDOMAINACCESSORINTERNAL_H
#define NPSDOMAINACCESSORINTERNAL_H

@class NSMutableSet, NSString, NSURL, NSMutableDictionary, NSUUID;
@protocol NPSDomainAccessorFilePresenterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NPSDomainAccessorFilePresenter.h"

@interface NPSDomainAccessorInternal : NSObject <NPSDomainAccessorFilePresenterDelegate>



@property (retain, nonatomic) NSMutableSet *dirtyKeysForWriting; // ivar: _dirtyKeysForWriting
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSURL *domainURL; // ivar: _domainURL
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // ivar: _externalQueue
@property (retain, nonatomic) NPSDomainAccessorFilePresenter *filePresenter; // ivar: _filePresenter
@property (nonatomic) BOOL hasReadFromDisk; // ivar: _hasReadFromDisk
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NSMutableDictionary *map; // ivar: _map
@property (nonatomic) BOOL nanoSettingsDirectoryExists; // ivar: _nanoSettingsDirectoryExists
@property (retain, nonatomic) NSUUID *pairingID; // ivar: _pairingID
@property (retain, nonatomic) NSString *pairingStorePath; // ivar: _pairingStorePath
@property (nonatomic) NSUInteger referenceCounter; // ivar: _referenceCounter


+(BOOL)domainIsValid:(id)arg0 ;
+(BOOL)valueIsValid:(id)arg0 ;
+(id)cfTypeNameForCFPropertyListRef:(*void)arg0 ;
+(id)copyDomainListForPairingDataStore:(id)arg0 ;
+(id)internalAccessorForPairingID:(id)arg0 pairingDataStore:(id)arg1 domain:(id)arg2 ;
+(id)readDomainURL:(id)arg0 withError:(*id)arg1 ;
+(id)urlForDomain:(id)arg0 pairingDataStore:(id)arg1 ;
+(id)writeDomain:(id)arg0 toURL:(id)arg1 ;
+(void)applicationDidEnterBackground;
+(void)applicationDidResume;
+(void)decrementInternalAccessorReferenceCount:(id)arg0 ;
+(void)extensionDidBecomeActive;
+(void)extensionWillResignActive;
+(void)initialize;
+(void)invalidateAndReleaseUnreferencedAccessors;
+(void)mergeDirtyKeys:(id)arg0 fromDictionary:(id)arg1 toDictionary:(id)arg2 ;
-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)boolForKey:(id)arg0 keyExistsAndHasValidFormat:(*BOOL)arg1 ;
-(BOOL)requiresDeviceUnlockedSinceBoot;
-(CGFloat)doubleForKey:(id)arg0 ;
-(CGFloat)doubleForKey:(id)arg0 keyExistsAndHasValidFormat:(*BOOL)arg1 ;
-(NSInteger)integerForKey:(id)arg0 ;
-(NSInteger)integerForKey:(id)arg0 keyExistsAndHasValidFormat:(*BOOL)arg1 ;
-(NSInteger)longForKey:(id)arg0 ;
-(NSInteger)longForKey:(id)arg0 keyExistsAndHasValidFormat:(*BOOL)arg1 ;
-(float)floatForKey:(id)arg0 ;
-(float)floatForKey:(id)arg0 keyExistsAndHasValidFormat:(*BOOL)arg1 ;
-(id)URLForKey:(id)arg0 ;
-(id)_copyKeyList;
-(id)_dictionaryRepresentation;
-(id)_objectForKey:(id)arg0 error:(*id)arg1 ;
-(id)_synchronizeReadOnly:(BOOL)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)canSynchronizeForReadingURL:(id)arg0 ;
-(id)canSynchronizeForWritingURL:(id)arg0 readFirst:(BOOL)arg1 ;
-(id)copyKeyList;
-(id)createNanoSettingsDirectory;
-(id)dataForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithPairingID:(id)arg0 pairingDataStore:(id)arg1 domain:(id)arg2 ;
-(id)objectForKey:(id)arg0 ;
-(id)stringArrayForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(id)synchronize;
-(void)_invalidatePresenter;
-(void)_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)filePresenterDidBecomeNonCurrent:(id)arg0 ;
-(void)invalidatePresenter;
-(void)objectForKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setFloat:(float)arg0 forKey:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setLong:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 completionHandler:(id)arg2 ;
-(void)setURL:(id)arg0 forKey:(id)arg1 ;
-(void)synchronizeWithCompletionHandler:(id)arg0 ;


@end


#endif