// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUURLTRACKER_H
#define TSUURLTRACKER_H

@class NSURL, NSData, NSString;
@protocol TSUURLWrapper, TSULogContext;

#import <Foundation/Foundation.h>

#import "TSUURLTrackerFilePresenter.h"
#import "TSUSandboxedURL.h"

@interface TSUURLTracker : NSObject <TSUURLWrapper>

 {
    TSUURLTrackerFilePresenter *_filePresenter;
}


@property (readonly) NSURL *URL;
@property (readonly) NSData *bookmarkData;
@property (readonly) NSData *bookmarkDataIfAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFilePresenter;
@property (readonly) BOOL isLikelyOnExternalStorage;
@property (readonly) BOOL isLikelyOnRemovedMedia;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) BOOL isVolumeKnownToBeEjectable;
@property (readonly) BOOL isVolumeKnownToBeLocal;
@property (readonly) BOOL isVolumeKnownToBeRemovable;
@property (readonly, nonatomic) NSObject<TSULogContext> *logContext; // ivar: _logContext
@property (readonly) TSUSandboxedURL *sandboxedURL;
@property (readonly) TSUSandboxedURL *sandboxedURLIfAvailable;
@property (readonly) Class superclass;
@property (readonly) NSURL *volumeURL;


-(id)bookmarkDataWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithBookmarkData:(id)arg0 ;
-(id)initWithBookmarkData:(id)arg0 delegate:(id)arg1 ;
-(id)initWithSandboxedURL:(id)arg0 bookmarkData:(id)arg1 delegate:(id)arg2 ;
-(id)initWithURLWrapper:(id)arg0 ;
-(id)initWithURLWrapper:(id)arg0 delegate:(id)arg1 ;
-(id)p_filePresenterQueue;
-(id)sandboxedURLWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)pause;
-(void)resume;
-(void)stop;


@end


#endif