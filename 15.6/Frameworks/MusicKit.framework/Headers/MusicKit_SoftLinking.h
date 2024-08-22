// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUSICKIT_SOFTLINKING_H
#define MUSICKIT_SOFTLINKING_H


#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking : NSObject



+(NSInteger)audioTraitsForRawValue:(NSInteger)arg0 ;
+(NSInteger)rawValueForAudioTraits:(NSInteger)arg0 ;
+(id)artworkCatalogWithDataSourceShortDescription:(id)arg0 dataSourceIdentifier:(id)arg1 tokenParameters:(id)arg2 ;
+(id)emptyIdentifierSet;
+(id)identifierSetWithCatalogID:(id)arg0 libraryID:(id)arg1 cloudID:(id)arg2 purchasedAdamID:(id)arg3 persistentID:(id)arg4 modelObjectType:(NSInteger)arg5 ;
+(id)identifierSetWithIdentifier:(id)arg0 modelObjectType:(NSInteger)arg1 ;
+(void)_ensureConsistencyOfUnderlyingOptionSetsForAudioTraits;


@end


#endif