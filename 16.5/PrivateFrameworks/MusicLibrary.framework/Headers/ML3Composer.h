// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3COMPOSER_H
#define ML3COMPOSER_H



#import "ML3Collection.h"

@interface ML3Composer : ML3Collection



+(BOOL)propertyIsCountProperty:(id)arg0 ;
+(NSInteger)revisionTrackingCode;
+(id)allProperties;
+(id)countingQueryForBaseQuery:(id)arg0 countProperty:(id)arg1 forIdentifier:(NSInteger)arg2 ;
+(id)databaseTable;
+(id)defaultOrderingTerms;
+(id)foreignPropertyForProperty:(id)arg0 entityClass:(Class)arg1 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)predisambiguatedProperties;
+(id)propertiesForGroupingKey;
+(id)protocolItemWithProperties:(id)arg0 inLibrary:(id)arg1 ;
+(id)trackForeignPersistentID;
+(void)initialize;
-(id)multiverseIdentifier;
-(id)protocolItem;
-(void)updateTrackValues:(id)arg0 ;


@end


#endif