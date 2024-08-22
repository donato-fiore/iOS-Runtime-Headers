// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSIRIVOCABULARYUPDATER_H
#define PLSIRIVOCABULARYUPDATER_H

@protocol PLSiriVocabularyService;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"

@interface PLSiriVocabularyUpdater : NSObject {
    id<PLSiriVocabularyService> *_vocabularyService;
    PLPhotoLibrary *_photoLibrary;
}




+(void)updateAllVocabulariesInLibrary:(id)arg0 withService:(id)arg1 ;
-(id)_albumTitlesFromDictionaries:(id)arg0 ;
-(id)_fetchAlbumDictionariesInContext:(id)arg0 ;
-(id)_fetchPersonDictionariesInContext:(id)arg0 ;
-(id)_userAlbumInfoFromDictionaries:(id)arg0 ;
-(id)init;
-(id)initWithVocabularyService:(id)arg0 photoLibrary:(id)arg1 ;
-(id)localizedTitleForAlbumDictionary:(id)arg0 ;
-(id)personNamesFromDictionaries:(id)arg0 ;
-(void)_updateAlbumsVocabularyInContext:(id)arg0 ;
-(void)_updateContactsVocabularyInContext:(id)arg0 ;
-(void)updateAlbumVocabularyFromAlbumDictionaries:(id)arg0 ;
-(void)updateAllVocabularies;
-(void)updateContactVocabularyFromPersonDictionaries:(id)arg0 ;


@end


#endif