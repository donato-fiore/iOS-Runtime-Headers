// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSYNDICATIONINGESTMUTEX_H
#define PLSYNDICATIONINGESTMUTEX_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "PLDatabaseContext.h"
#import "PLPhotoLibrary.h"

@interface PLSyndicationIngestMutex : NSObject {
    PLDatabaseContext *_databaseContext;
    PLPhotoLibrary *_syndicationIngestLibrary;
    os_unfair_lock_s _syndicationIngestLibraryLock;
    unsigned char _syndicationIngestClientIdentifier;
    unsigned char _requestedSyndicationIngestClientIdentifier;
    NSDate *_syndicationIngestLibraryUsageStart;
}




-(BOOL)shouldStopUsingSyndicationIngestLibraryWithIdentifier:(unsigned char)arg0 ;
-(id)_obtainSyndicationIngestLibraryIfPossibleWithIdentifier:(unsigned char)arg0 ;
-(id)initWithDatabaseContext:(id)arg0 ;
-(id)syndicationIngestMutexStateDescription;
-(id)tryUsingSyndicationIngestLibraryWithIdentifier:(unsigned char)arg0 ;
-(void)stopUsingSyndicationIngestLibraryWithIdentifier:(unsigned char)arg0 ;


@end


#endif