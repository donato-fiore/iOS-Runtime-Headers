// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIBOOTSTRAPSCRIPTFALLBACK_H
#define SKUIBOOTSTRAPSCRIPTFALLBACK_H

@class NSString, NSURL;
@protocol IKAppScriptFallbackHandler, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SKUIBootstrapScriptFallback : NSObject <IKAppScriptFallbackHandler>



@property (readonly, nonatomic) NSInteger _unsynchronizedState;
@property (readonly, copy, nonatomic) NSString *cacheFilename; // ivar: _cacheFilename
@property (readonly, nonatomic) NSURL *cacheFolder; // ivar: _cacheFolder
@property (readonly, copy, nonatomic) NSURL *cachedFileLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isBagAvailable;
@property CGFloat maximumAge; // ivar: _maximumAge
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) NSInteger state;
@property (readonly) Class superclass;


+(id)cacheFilenameForStoreFrontIdentifier:(id)arg0 ;
+(id)defaultCacheFolder;
-(BOOL)_setCacheAge:(id)arg0 error:(*id)arg1 ;
-(BOOL)canFallbackForError:(id)arg0 ;
-(id)init;
-(id)initWithCacheFolder:(id)arg0 filename:(id)arg1 ;
-(id)initWithFilename:(id)arg0 ;
-(id)retrieveScript:(*id)arg0 ;
-(void)_createCacheDirectoriesIfNeeded;
-(void)_logError:(id)arg0 forOperation:(id)arg1 ;
-(void)_runWhenBackgroundWorkFinished:(id)arg0 ;
-(void)invalidate;
-(void)scriptEvaluated:(id)arg0 ;


@end


#endif