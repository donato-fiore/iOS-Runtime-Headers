// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSYNDICATIONSANITIZEDRESOURCEGENERATOR_H
#define PLSYNDICATIONSANITIZEDRESOURCEGENERATOR_H

@protocol PLSyndicationSanitizedResourceGeneratorDelegate;

#import <Foundation/Foundation.h>


@interface PLSyndicationSanitizedResourceGenerator : NSObject

@property (readonly, weak, nonatomic) NSObject<PLSyndicationSanitizedResourceGeneratorDelegate> *delegate; // ivar: _delegate


-(BOOL)_handleGenerateCompletionWithGenerateError:(id)arg0 storedRecipes:(id)arg1 sourceMetadata:(id)arg2 targetRecipe:(id)arg3 assetObjectID:(id)arg4 managedObjectContext:(id)arg5 timeZoneLookup:(id)arg6 error:(*id)arg7 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_generateAndStoreDerivativeResourcesForSyndicationResource:(id)arg0 completion:(id)arg1 ;
-(void)generateAndStoreDerivativeResourcesForSyndicationResource:(id)arg0 completion:(id)arg1 ;


@end


#endif