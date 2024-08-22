// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMOMENTSHARECACHE_H
#define IMMOMENTSHARECACHE_H

@class NSMutableDictionary, NSString;
@protocol PHPhotoLibraryChangeObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMMomentShareCache : NSObject <PHPhotoLibraryChangeObserver>

 {
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_libraryRegistrationQueue;
    BOOL _hasRegisteredForLibraryChanges;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_momentShareForURLString:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)momentShareForURLString:(id)arg0 error:(*id)arg1 ;
-(void)_ensureLibraryRegistration;
-(void)_processFetchedMomentShare:(id)arg0 forURLString:(id)arg1 error:(id)arg2 completionHandlers:(id)arg3 ;
-(void)momentShareForURLString:(id)arg0 completionHandler:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg0 ;


@end


#endif