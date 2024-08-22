// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INVOCABULARYVALIDATOR_H
#define _INVOCABULARYVALIDATOR_H


#import <Foundation/Foundation.h>


@interface _INVocabularyValidator : NSObject



+(void)initialize;
-(BOOL)_bundleID:(id)arg0 isWhitelistedForVocabularyType:(NSInteger)arg1 ;
-(NSUInteger)maximumNumberOfVocabularyStringsForType:(NSInteger)arg0 ;
-(id)_intentsUsingVocabularyType:(NSInteger)arg0 ;
-(id)_pathToAppWithBundleID:(id)arg0 ;
-(id)_validatedItemsFromVocabularyObject:(id)arg0 ofType:(NSInteger)arg1 loggingWarnings:(BOOL)arg2 withItemFactory:(id)arg3 ;
-(id)validatedItemsFromVocabularySpeakables:(id)arg0 ofType:(NSInteger)arg1 loggingWarnings:(BOOL)arg2 ;
-(id)validatedItemsFromVocabularyStrings:(id)arg0 ofType:(NSInteger)arg1 loggingWarnings:(BOOL)arg2 ;
-(void)_confirmExistenceOfWatchAppForCompanionBundleID:(id)arg0 handlingIntents:(id)arg1 completion:(id)arg2 ;
-(void)_determineIfBundleID:(id)arg0 appPath:(id)arg1 canProvideVocabularyOfType:(NSInteger)arg2 completion:(id)arg3 ;
-(void)determineIfBundleID:(id)arg0 canProvideVocabularyOfType:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif