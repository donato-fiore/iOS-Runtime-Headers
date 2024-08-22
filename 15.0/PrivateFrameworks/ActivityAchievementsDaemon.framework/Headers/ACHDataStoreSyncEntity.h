// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHDATASTORESYNCENTITY_H
#define ACHDATASTORESYNCENTITY_H

@class HDKeyValueSyncEntity, NSString;
@protocol HDNanoSyncEntity;



@interface ACHDataStoreSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)removeDataStoreValuesForKeys:(id)arg0 domain:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)setDataStoreValuesWithDictionary:(id)arg0 domain:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)category;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)dataStoreValueForKey:(id)arg0 domain:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;
+(void)didReceiveValuesForKeys:(id)arg0 profile:(id)arg1 ;


@end


#endif