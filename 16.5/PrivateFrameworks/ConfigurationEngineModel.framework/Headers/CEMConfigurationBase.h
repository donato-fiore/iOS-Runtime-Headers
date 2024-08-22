// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMCONFIGURATIONBASE_H
#define CEMCONFIGURATIONBASE_H



#import "CEMDeclarationBase.h"

@interface CEMConfigurationBase : CEMDeclarationBase



+(id)declarationClass;
+(id)profileType;
+(id)restrictionPayloadKeys;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(id)assetReferences;
-(id)payloadUUIDWithIdentifier:(id)arg0 outUUIDs:(id)arg1 oldUUIDs:(id)arg2 ;
-(id)profilePayloadsByTypeWithAssetProviders:(id)arg0 ;
-(id)synthesizeProfileOutUUIDs:(id)arg0 withOldUUIDs:(id)arg1 assetProviders:(id)arg2 ;
-(id)synthesizeProfilePayloadOutUUIDs:(id)arg0 withOldUUIDs:(id)arg1 assetProviders:(id)arg2 ;
-(int)activationLevel;


@end


#endif