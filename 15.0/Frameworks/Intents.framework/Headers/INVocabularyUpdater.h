// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INVOCABULARYUPDATER_H
#define INVOCABULARYUPDATER_H

@class INVocabularyConnection;



@interface INVocabularyUpdater : INVocabularyConnection



+(id)_sharedAppInstance;
+(void)clearAllCustomVocabulary;
-(void)setCustomPhotoAlbumNames:(id)arg0 ;
-(void)setValidatedVocabulary:(id)arg0 forIntentSlot:(id)arg1 validationCompletion:(id)arg2 ;


@end


#endif