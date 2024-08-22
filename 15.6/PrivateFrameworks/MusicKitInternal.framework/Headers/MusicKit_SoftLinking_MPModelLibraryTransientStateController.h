// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELLIBRARYTRANSIENTSTATECONTROLLER_H
#define MUSICKIT_SOFTLINKING_MPMODELLIBRARYTRANSIENTSTATECONTROLLER_H

@class MPModelLibraryTransientStateController;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelLibraryTransientStateController : NSObject {
    MPModelLibraryTransientStateController *_underlyingLibraryTransientStateController;
}




+(id)sharedLibraryTransientStateController;
-(id)_initWithUnderlyingLibraryTransientStateController:(id)arg0 ;
-(void)performAddToPlaylistWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)performDeleteEntityWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)performLibraryImportChangeWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)performLibraryKeepLocalChangeWithRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif