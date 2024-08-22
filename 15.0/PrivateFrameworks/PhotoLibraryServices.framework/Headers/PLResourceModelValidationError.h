// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLRESOURCEMODELVALIDATIONERROR_H
#define PLRESOURCEMODELVALIDATIONERROR_H

@class NSError;



@interface PLResourceModelValidationError : NSError



+(id)allPossibleErrorCodes;
+(id)duplicateResourceErrorAmongResources:(id)arg0 forAsset:(id)arg1 ;
+(id)duplicatedCPLTypeAssetErrorForAsset:(id)arg0 cplType:(NSUInteger)arg1 ;
+(id)localAvailabilityInconsistencyErrorForResource:(id)arg0 ;
+(id)malformedKeyErrorForKey:(id)arg0 resource:(id)arg1 ;
+(id)malformedTableThumbnailKeyErrorForKey:(id)arg0 assetID:(id)arg1 ;
+(id)missingRequiredResourcesErrorForAsset:(id)arg0 message:(id)arg1 ;
+(id)tableThumbUUIDMistmatchErrorForKey:(id)arg0 indexFromKey:(NSUInteger)arg1 assetID:(id)arg2 ;
+(id)unexpectedLocalResourceError:(id)arg0 ;
+(id)unreachableFileThumbnailErrorForKey:(id)arg0 assetID:(id)arg1 ;
+(id)unreachableKeyErrorForKey:(id)arg0 atURL:(id)arg1 resource:(id)arg2 ;
+(id)unreachableTableThumbnailErrorForKey:(id)arg0 assetID:(id)arg1 ;
-(id)description;
-(id)init;


@end


#endif