// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELLIBRARYTRANSIENTSTATECONTROLLER_H
#define MUSICKIT_SOFTLINKING_MPMODELLIBRARYTRANSIENTSTATECONTROLLER_H

@class MPModelLibraryTransientStateController;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelLibraryTransientStateController : NSObject {
    MPModelLibraryTransientStateController *_underlyingLibraryTransientStateController;
}




+(id)didChangeNotificationName;
+(id)sharedLibraryTransientStateController;
-(NSInteger)_libraryTransientFavoriteState:(NSInteger)arg0 ;
-(NSInteger)_underlyingLibraryTransientFavoriteState:(NSInteger)arg0 ;
-(NSInteger)transientFavoriteStateForModelObject:(id)arg0 ;
-(id)_initWithUnderlyingLibraryTransientStateController:(id)arg0 ;
-(void)_handleLibraryTransientStateControllerDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)performAddToPlaylistWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)performDeleteEntityWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)performFavoriteStateChangeRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)performLibraryImportChangeWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)performLibraryKeepLocalChangeWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)performOperation:(id)arg0 ;


@end


#endif