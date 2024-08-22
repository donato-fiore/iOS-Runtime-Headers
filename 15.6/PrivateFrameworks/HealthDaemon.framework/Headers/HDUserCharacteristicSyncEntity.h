// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDUSERCHARACTERISTICSYNCENTITY_H
#define HDUSERCHARACTERISTICSYNCENTITY_H

@class NSString;
@protocol HDNanoSyncEntity;


#import "HDKeyValueSyncEntity.h"

@interface HDUserCharacteristicSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSpeculativeNanoSyncChanges;
+(NSInteger)category;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg0 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;
+(void)didReceiveValuesForKeys:(id)arg0 profile:(id)arg1 ;


@end


#endif