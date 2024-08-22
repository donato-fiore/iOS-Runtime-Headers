// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMODEASSERTIONSTORE_H
#define DNDSMODEASSERTIONSTORE_H

@class NSArray, NSString;
@protocol DNDSBackingStoreRecord, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface DNDSModeAssertionStore : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSArray *assertions; // ivar: _assertions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *invalidationRequests; // ivar: _invalidationRequests
@property (readonly, copy, nonatomic) NSArray *invalidations; // ivar: _invalidations
@property (readonly) Class superclass;


+(id)messageDateForPeaceSyncDictionaryRepresentation:(id)arg0 ;
+(id)messageDateForSyncDictionaryRepresentation:(id)arg0 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
+(id)newWithPeaceSyncDictionaryRepresentation:(id)arg0 ;
+(id)newWithSyncDictionaryRepresentation:(id)arg0 ;
+(id)upgradeDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(struct ? )backingRecordKeys;
+(struct ? )syncMessageKeys;
+(struct ? )sysdiagnoseRecordKeys;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithStore:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)lastUpdateDate;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)peaceSyncDictionaryRepresentationWithDate:(id)arg0 messageUUID:(id)arg1 userRequestedClientIdentifierHandler:(id)arg2 ;
-(id)syncDictionaryRepresentationWithDate:(id)arg0 messageUUID:(id)arg1 ;
-(id)sysdiagnoseDictionaryRepresentation;


@end


#endif