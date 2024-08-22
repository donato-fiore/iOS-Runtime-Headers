// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3ALBUM_H
#define ML3ALBUM_H



#import "ML3Collection.h"

@interface ML3Album : ML3Collection



+(BOOL)assistantLibraryContentsChangeForProperty:(id)arg0 ;
+(BOOL)libraryContentsChangeForProperty:(id)arg0 ;
+(BOOL)propertyIsCountProperty:(id)arg0 ;
+(NSInteger)revisionTrackingCode;
+(id)_albumArtistProtocolItemWithTrackProperties:(id)arg0 inLibrary:(id)arg1 ;
+(id)allProperties;
+(id)countingQueryForBaseQuery:(id)arg0 countProperty:(id)arg1 forIdentifier:(NSInteger)arg2 ;
+(id)databaseTable;
+(id)defaultOrderingTerms;
+(id)foreignPropertyForProperty:(id)arg0 entityClass:(Class)arg1 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)predisambiguatedProperties;
+(id)propertiesForGroupingKey;
+(id)propertiesForGroupingUniqueCollections;
+(id)protocolItemWithProperties:(id)arg0 inLibrary:(id)arg1 ;
+(id)trackForeignPersistentID;
+(void)initialize;
-(id)multiverseIdentifier;
-(id)protocolItem;
-(void)updateTrackValues:(id)arg0 ;


@end


#endif