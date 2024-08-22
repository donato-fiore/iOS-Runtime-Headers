// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDUNITPREFERENCESSYNCENTITY_H
#define HDUNITPREFERENCESSYNCENTITY_H

@class NSString;
@protocol HDNanoSyncEntity;


#import "HDKeyValueSyncEntity.h"

@interface HDUnitPreferencesSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)category;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg0 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;
+(void)didReceiveValuesForKeys:(id)arg0 profile:(id)arg1 ;


@end


#endif