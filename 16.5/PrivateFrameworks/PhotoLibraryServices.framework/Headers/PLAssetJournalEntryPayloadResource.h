// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETJOURNALENTRYPAYLOADRESOURCE_H
#define PLASSETJOURNALENTRYPAYLOADRESOURCE_H

@class NSData, NSString, NSDictionary;
@protocol PLResourceIdentity;

#import <Foundation/Foundation.h>

#import "PLManagedObjectJournalEntryPayload.h"
#import "PLUniformTypeIdentifier.h"

@interface PLAssetJournalEntryPayloadResource : NSObject <PLResourceIdentity>

 {
    PLManagedObjectJournalEntryPayload *_payload;
}


@property (readonly, nonatomic) NSData *bookmarkData;
@property (readonly, nonatomic) NSString *bookmarkPath;
@property (readonly, nonatomic) NSUInteger cplType;
@property (readonly, nonatomic) unsigned short dataStoreClassID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isOriginalResource;
@property (readonly, nonatomic) NSDictionary *payloadAttributes; // ivar: _payloadAttributes
@property (readonly, nonatomic) unsigned int recipeID;
@property (readonly, nonatomic) unsigned int resourceType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (readonly, nonatomic) NSString *uniformTypeIdentifierString;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) NSString *volumeUuidString;


+(BOOL)isValidForPersistenceWithRecipeID:(unsigned int)arg0 ;
+(void)_applyLargeVideoRecipeRefactorFixToExternalResource:(id)arg0 withAsset:(id)arg1 ;
-(BOOL)isAdjusted;
-(BOOL)isEqualToPayloadResource:(id)arg0 ;
-(BOOL)isPrimaryResource;
-(BOOL)isReferenceResource;
-(BOOL)isValidForPersistence;
-(id)fourCharCodeName;
-(id)initWithPayloadAttributes:(id)arg0 payload:(id)arg1 ;
-(id)validatedExternalResourceWithAsset:(id)arg0 isCPLEnabled:(BOOL)arg1 ;
-(short)trashedState;
-(void)appendToDescriptionBuilder:(id)arg0 ;
-(void)mergePayloadResource:(id)arg0 nilAttributes:(id)arg1 ;
-(void)updateStoredResource:(id)arg0 ;


@end


#endif