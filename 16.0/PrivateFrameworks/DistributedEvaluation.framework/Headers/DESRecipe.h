// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DESRECIPE_H
#define DESRECIPE_H

@class NSArray, NSString, NSData, NSNumber, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DESRecipe : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *attachmentPaths; // ivar: _attachmentPaths
@property (copy, nonatomic) NSArray *attachmentSignatures; // ivar: _attachmentSignatures
@property (copy, nonatomic) NSArray *attachments; // ivar: _attachments
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSData *certificate; // ivar: _certificate
@property (readonly, nonatomic) NSNumber *maxNorm;
@property (readonly, nonatomic) NSNumber *normBinCount;
@property (readonly, copy, nonatomic) NSDictionary *parametersUsed; // ivar: _parametersUsed
@property (readonly, nonatomic) BOOL pluginShouldAddNoiseAndEncryptResult;
@property (readonly, nonatomic) NSDictionary *predicate; // ivar: _predicate
@property (readonly, nonatomic) NSString *privacyIdentifier;
@property (readonly, nonatomic) NSString *privacyIdentifierExt;
@property (copy, nonatomic) NSString *recipeID; // ivar: _recipeID
@property (readonly, copy, nonatomic) NSDictionary *recipeUserInfo; // ivar: _recipeUserInfo
@property (readonly, nonatomic) BOOL transportIsDedisco;
@property (readonly, nonatomic) BOOL useAdaptiveClipping;
@property (readonly, nonatomic) BOOL useAggregatableMetadata;
@property (readonly, nonatomic) BOOL useSparsification;


+(BOOL)_hasValidClippingBounds:(id)arg0 matchValidNumChunks:(id)arg1 ;
+(BOOL)pluginShouldAddNoiseAndEncryptResult:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(BOOL)transportIsDedisco:(id)arg0 ;
+(BOOL)useAdaptiveClipping:(id)arg0 ;
+(BOOL)useAggregatableMetadata:(id)arg0 ;
+(BOOL)useSparsification:(id)arg0 ;
-(id)_initWithAssetURL:(id)arg0 bundleIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)_initWithRecipeResponse:(id)arg0 recipeID:(id)arg1 bundleIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)_initWithRecipeUserInfo:(id)arg0 recipeID:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)_initWithRecipeUserInfo:(id)arg0 recipeID:(id)arg1 bundleIdentifier:(id)arg2 predicate:(id)arg3 ;
-(id)_inithWithContentsOfFile:(id)arg0 recipeID:(id)arg1 bundleIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)haruspexKeyWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif