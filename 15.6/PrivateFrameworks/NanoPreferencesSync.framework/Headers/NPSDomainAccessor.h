// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPSDOMAINACCESSOR_H
#define NPSDOMAINACCESSOR_H

@class NSString, NSUUID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NPSDomainAccessorInternal.h"

@interface NPSDomainAccessor : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // ivar: _externalQueue
@property (nonatomic) BOOL initializedWithActiveDevice; // ivar: _initializedWithActiveDevice
@property (retain, nonatomic) NPSDomainAccessorInternal *internalAccessor; // ivar: _internalAccessor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *invalidationQueue; // ivar: _invalidationQueue
@property (readonly, nonatomic) NSUUID *pairingID;


+(id)copyDomainList;
+(id)copyDomainListForPairingID:(id)arg0 pairingDataStore:(id)arg1 ;
+(void)initialize;
+(void)resolveActivePairedDevicePairingID:(*id)arg0 pairingDataStore:(*id)arg1 ;
-(BOOL)activeDeviceChanged;
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
-(id)arrayForKey:(id)arg0 ;
-(id)copyKeyList;
-(id)dataForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDomain:(id)arg0 ;
-(id)initWithDomain:(id)arg0 pairedDevice:(id)arg1 ;
-(id)initWithDomain:(id)arg0 pairingID:(id)arg1 pairingDataStore:(id)arg2 ;
-(id)initWithDomain:(id)arg0 queue:(id)arg1 ;
-(id)initWithDomain:(id)arg0 queue:(id)arg1 pairingID:(id)arg2 pairingDataStore:(id)arg3 ;
-(id)initWithInternalDomainAccessor:(id)arg0 queue:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(id)queue;
-(id)shouldNotDoWork;
-(id)stringArrayForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(id)synchronize;
-(void)dealloc;
-(void)invalidate;
-(void)objectForKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setFloat:(float)arg0 forKey:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 completionHandler:(id)arg2 ;
-(void)setURL:(id)arg0 forKey:(id)arg1 ;
-(void)synchronizeWithCompletionHandler:(id)arg0 ;


@end


#endif