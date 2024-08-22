// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STBLUEPRINTCONFIGURATION_H
#define STBLUEPRINTCONFIGURATION_H

@class NSManagedObject, NSString, NSData;
@protocol STSyncableSubObject, STUniquelySerializableManagedObject, STSerializableManagedObject;


#import "STBlueprint.h"

@interface STBlueprintConfiguration : NSManagedObject <STSyncableSubObject, STUniquelySerializableManagedObject>



@property (retain, nonatomic) STBlueprint *blueprint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *payloadPlist;
@property (readonly) Class superclass;
@property (readonly) NSObject<STSerializableManagedObject> *syncableRootObject;
@property (copy, nonatomic) NSString *type;


+(Class)cemDeclarationClassForConfigurationType:(id)arg0 ;
+(id)blueprintConfigurationTypeForDeclaration:(id)arg0 ;
+(id)cemConfigurationIdentifierWithType:(id)arg0 forUser:(id)arg1 ;
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg0 ofType:(id)arg1 ;
-(BOOL)updateWithDictionaryRepresentation:(id)arg0 ;
-(id)cemConfiguration;
-(id)dictionaryRepresentation;
-(void)setCemConfiguration:(id)arg0 ;


@end


#endif