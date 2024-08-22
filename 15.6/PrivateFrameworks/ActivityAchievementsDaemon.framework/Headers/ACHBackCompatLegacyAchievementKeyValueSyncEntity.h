// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHBACKCOMPATLEGACYACHIEVEMENTKEYVALUESYNCENTITY_H
#define ACHBACKCOMPATLEGACYACHIEVEMENTKEYVALUESYNCENTITY_H

@class HDKeyValueSyncEntity, NSString;
@protocol HDNanoSyncEntity;



@interface ACHBackCompatLegacyAchievementKeyValueSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)setLegacyDataStoreValuesWithDictionary:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(NSInteger)category;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;


@end


#endif