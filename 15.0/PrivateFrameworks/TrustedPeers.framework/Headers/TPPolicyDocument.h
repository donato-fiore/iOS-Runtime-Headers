// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPPOLICYDOCUMENT_H
#define TPPOLICYDOCUMENT_H

@class NSArray, NSData;

#import <Foundation/Foundation.h>

#import "TPPolicyVersion.h"

@interface TPPolicyDocument : NSObject

@property (readonly) NSArray *keyViewMapping;
@property (readonly, nonatomic) NSData *protobuf; // ivar: _protobuf
@property (readonly, nonatomic) TPPolicyVersion *version; // ivar: _version


+(BOOL)isEqualKeyViewMapping:(id)arg0 other:(id)arg1 ;
+(id)categoriesByViewFromPb:(id)arg0 ;
+(id)introducersByCategoryFromPb:(id)arg0 ;
+(id)modelToCategoryFromPb:(id)arg0 ;
+(id)policyDocWithHash:(id)arg0 data:(id)arg1 ;
+(id)redactionWithEncrypter:(id)arg0 modelToCategory:(id)arg1 categoriesByView:(id)arg2 introducersByCategory:(id)arg3 keyViewMapping:(id)arg4 error:(*id)arg5 ;
+(id)redactionsFromPb:(id)arg0 ;
+(void)addCategoriesByView:(id)arg0 toPB:(id)arg1 ;
+(void)addIntroducersByCategory:(id)arg0 toPB:(id)arg1 ;
+(void)addKeyViewMapping:(id)arg0 toPB:(id)arg1 ;
+(void)addModelToCategory:(id)arg0 toPB:(id)arg1 ;
+(void)addRedactions:(id)arg0 toPB:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPolicyDocument:(id)arg0 ;
-(NSUInteger)hash;
-(id)cloneWithVersionNumber:(NSUInteger)arg0 ;
-(id)cloneWithVersionNumber:(NSUInteger)arg0 prependingCategoriesByView:(id)arg1 prependingKeyViewMapping:(id)arg2 ;
-(id)description;
-(id)encodeProtobuf;
-(id)initWithHash:(id)arg0 data:(id)arg1 ;
-(id)initWithVersion:(NSUInteger)arg0 modelToCategory:(id)arg1 categoriesByView:(id)arg2 introducersByCategory:(id)arg3 redactions:(id)arg4 keyViewMapping:(id)arg5 userControllableViewList:(id)arg6 piggybackViews:(id)arg7 priorityViews:(id)arg8 inheritedExcludedViews:(id)arg9 hashAlgo:(NSInteger)arg10 ;
-(id)policyWithSecrets:(id)arg0 decrypter:(id)arg1 error:(*id)arg2 ;


@end


#endif