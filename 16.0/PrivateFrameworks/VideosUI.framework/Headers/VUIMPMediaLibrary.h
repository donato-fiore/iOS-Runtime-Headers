// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMPMEDIALIBRARY_H
#define VUIMPMEDIALIBRARY_H

@class MPMediaLibrary, NSOperationQueue;
@protocol OS_dispatch_queue;


#import "VUIMediaLibrary.h"

@interface VUIMPMediaLibrary : VUIMediaLibrary

@property (nonatomic) NSUInteger connectionState; // ivar: _connectionState
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (retain, nonatomic) NSOperationQueue *serialOperationQueue; // ivar: _serialOperationQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // ivar: _serialProcessingDispatchQueue


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(NSUInteger)_connectionStateFromMPMediaLibraryStatus:(NSInteger)arg0 ;
+(void)initialize;
-(BOOL)hasImageCache;
-(id)_imageLoadOperationWithParams:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 ;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg0 ;
-(id)_imageLoaderIdentifier;
-(id)enqueueFetchRequests:(id)arg0 completionHandler:(id)arg1 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 manager:(id)arg2 ;
-(id)initWithMPMediaLibrary:(id)arg0 type:(NSUInteger)arg1 manager:(id)arg2 ;
-(id)saveMediaEntity:(id)arg0 completionHandler:(id)arg1 ;
-(id)title;
-(void)_enqueueProcessingBlock:(id)arg0 ;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg0 ;
-(void)_handleMediaLibraryStatusDidChangeNotification:(id)arg0 ;
// -(void)connectWithCompletionHandler:(id)arg0 progressHandler:(unk)arg1  ;
-(void)dealloc;


@end


#endif