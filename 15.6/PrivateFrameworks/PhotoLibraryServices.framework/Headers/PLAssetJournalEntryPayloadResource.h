// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETJOURNALENTRYPAYLOADRESOURCE_H
#define PLASSETJOURNALENTRYPAYLOADRESOURCE_H

@class NSData, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "PLJournalEntryPayload.h"

@interface PLAssetJournalEntryPayloadResource : NSObject {
    PLJournalEntryPayload *_payload;
}


@property (readonly, nonatomic) NSData *bookmarkData;
@property (readonly, nonatomic) NSString *bookmarkPath;
@property (readonly, nonatomic) NSUInteger cplType;
@property (readonly, nonatomic) unsigned short dataStoreClassID;
@property (readonly, nonatomic) NSDictionary *payloadAttributes; // ivar: _payloadAttributes
@property (readonly, nonatomic) unsigned int recipeID;
@property (readonly, nonatomic) unsigned int resourceType;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) NSString *volumeUuidString;


+(BOOL)isValidForPersistenceWithRecipeID:(unsigned int)arg0 ;
+(void)_applyLargeVideoRecipeRefactorFixToExternalResource:(id)arg0 withAsset:(id)arg1 ;
-(BOOL)isAdjusted;
-(BOOL)isEqualToPayloadResource:(id)arg0 ;
-(BOOL)isOriginalResource;
-(BOOL)isReferenceResource;
-(BOOL)isValidForPersistence;
-(id)description;
-(id)fourCharCodeName;
-(id)initWithPayloadAttributes:(id)arg0 payload:(id)arg1 ;
-(id)validatedExternalResourceWithAsset:(id)arg0 isCPLEnabled:(BOOL)arg1 ;
-(short)trashedState;
-(void)appendToDescriptionBuilder:(id)arg0 ;
-(void)mergePayloadResource:(id)arg0 nilAttributes:(id)arg1 ;
-(void)updateStoredResource:(id)arg0 ;


@end


#endif