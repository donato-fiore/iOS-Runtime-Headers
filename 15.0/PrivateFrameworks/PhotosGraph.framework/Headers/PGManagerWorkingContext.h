// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMANAGERWORKINGCONTEXT_H
#define PGMANAGERWORKINGCONTEXT_H

@class PHPhotoLibrary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGManager.h"
#import "PGCurationManager.h"

@interface PGManagerWorkingContext : NSObject {
    PGManager *_manager;
}


@property (readonly) PGCurationManager *curationManager;
@property (readonly) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly) PHPhotoLibrary *photoLibrary;


-(id)initWithManager:(id)arg0 loggingConnection:(id)arg1 ;
-(id)musicCuratorContextWithCurationOptions:(id)arg0 error:(*id)arg1 ;
-(id)musicCuratorContextWithRecentlyUsedSongAdamIDs:(id)arg0 error:(*id)arg1 ;
-(void)performSynchronousConcurrentGraphReadUsingBlock:(id)arg0 ;


@end


#endif