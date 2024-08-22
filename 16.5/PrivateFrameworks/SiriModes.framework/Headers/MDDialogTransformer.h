// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDDIALOGTRANSFORMER_H
#define MDDIALOGTRANSFORMER_H


#import <Foundation/Foundation.h>


@interface MDDialogTransformer : NSObject



+(BOOL)_alwaysPrintSiriResponse;
+(BOOL)_shouldTransformLegacyAddViews;
+(BOOL)supportsTransformationForAceCommand:(id)arg0 ;
+(NSUInteger)_typeOfAddViews:(id)arg0 ;
+(id)_addViewsForAddDialogs:(id)arg0 views:(id)arg1 ;
+(id)_analytics;
+(id)_configurationDictionary;
+(id)_firstSnippetInViews:(id)arg0 ;
+(id)_redundantDUCIds;
+(id)_removeRedundantUtteranceViewsFromAddViews:(id)arg0 forMode:(NSUInteger)arg1 ;
+(id)_removeSpeakableTextFromAddViews:(id)arg0 forMode:(NSUInteger)arg1 ;
+(id)_removeUtteranceViewsFromAddViews:(id)arg0 forMode:(NSUInteger)arg1 ;
+(id)_sayItForDialog:(id)arg0 ;
+(id)_speakableTextForDialog:(id)arg0 mode:(NSUInteger)arg1 ;
+(id)_transformDialogAddViews:(id)arg0 forMode:(NSUInteger)arg1 ;
+(id)_transformLegacyAddViews:(id)arg0 forMode:(NSUInteger)arg1 ;
+(id)_utteranceViewForDialog:(id)arg0 mode:(NSUInteger)arg1 printedOnly:(BOOL)arg2 ;
+(id)dialogIdentifiers;
+(id)transformAddDialogs:(id)arg0 forMode:(NSUInteger)arg1 ;
+(id)transformAddViews:(id)arg0 forMode:(NSUInteger)arg1 ;
+(void)_logModeComputationForAceCommand:(id)arg0 mode:(NSUInteger)arg1 ;
+(void)setDialogIdentifiers:(id)arg0 ;


@end


#endif