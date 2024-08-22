// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDPROTECTEDNANOUSERDEFAULTSSYNCENTITY_H
#define HDPROTECTEDNANOUSERDEFAULTSSYNCENTITY_H

@class NSString;
@protocol HDNanoSyncEntity;


#import "HDNanoUserDefaultsSyncEntity.h"

@interface HDProtectedNanoUserDefaultsSyncEntity : HDNanoUserDefaultsSyncEntity <HDNanoSyncEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSpeculativeNanoSyncChanges;
+(NSInteger)category;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;


@end


#endif