// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDATABASECONTEXT_H
#define PLDATABASECONTEXT_H

@class PLLazyObject;

#import <Foundation/Foundation.h>

#import "PLPhotoLibraryBundle.h"
#import "PLSyndicationIngestMutex.h"

@interface PLDatabaseContext : NSObject {
    PLPhotoLibraryBundle *_libraryBundle;
    PLLazyObject *_lazyMomentLibrary;
    PLLazyObject *_lazyNonTransientLibrary;
}


@property (readonly) PLSyndicationIngestMutex *syndicationIngestMutex; // ivar: _syndicationIngestMutex
@property (readonly) NSInteger wellKnownPhotoLibraryIdentifier;


+(id)newShortLivedLibraryWithName:(char *)arg0 bundle:(id)arg1 ;
+(void)_configureShortLivedLibraryOptionsForAutomaticPin:(id)arg0 ;
-(id)initWithLibraryBundle:(id)arg0 ;
-(id)momentLibrary;
-(id)newMomentLibrary;
-(id)newNonTransientLibrary;
-(id)newShortLivedCplLibraryWithNameSuffix:(char *)arg0 ;
-(id)newShortLivedLibraryForHistoryPersistenceReadingWithName:(char *)arg0 ;
-(id)newShortLivedLibraryWithName:(char *)arg0 ;
-(id)newShortLivedMacOpenClientLibraryWithName:(char *)arg0 ;
-(id)sharedNonTransientLibrary;
-(void)dealloc;
-(void)invalidate;
// -(void)perform:(id)arg0 withName:(unk)arg1  ;
// -(void)performSync:(id)arg0 withName:(unk)arg1  ;
// -(void)performTransaction:(id)arg0 withName:(unk)arg1  ;
// -(void)performTransactionSync:(id)arg0 withName:(unk)arg1  ;


@end


#endif