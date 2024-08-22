// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSHAREDLIBRARYSUGGESTIONSPROCESSOR_H
#define PGSHAREDLIBRARYSUGGESTIONSPROCESSOR_H


#import <Foundation/Foundation.h>

#import "PGManagerWorkingContext.h"

@interface PGSharedLibrarySuggestionsProcessor : NSObject {
    PGManagerWorkingContext *_workingContext;
}




+(BOOL)shouldIncludeAsset:(id)arg0 curationContext:(id)arg1 rejectionReason:(*id)arg2 ;
+(id)libraryScopeToUseWithPhotoLibrary:(id)arg0 ;
-(BOOL)_suggestAssetsFromMoments:(id)arg0 libraryScope:(id)arg1 curationContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)processSuggestionsFromStartDate:(id)arg0 toDate:(id)arg1 withError:(*id)arg2 progressBlock:(id)arg3 ;
-(id)_evaluatorForLibraryScopeRules:(id)arg0 withGraph:(id)arg1 ;
-(id)_momentsForMomentNodes:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(id)_rulesForLibraryScope:(id)arg0 ;
-(id)_startDateFromLibraryScopeRules:(id)arg0 ;
-(id)evaluatorWithGraph:(id)arg0 ;
-(id)initWithWorkingContext:(id)arg0 ;


@end


#endif