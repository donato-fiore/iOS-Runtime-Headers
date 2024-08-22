// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOREACHABILITY_H
#define GEOREACHABILITY_H

@class NSString;
@protocol GEOResourceManifestTileGroupObserver;

#import <Foundation/Foundation.h>


@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver>

 {
    BOOL _networkReachable;
    NSUInteger _errorCount;
    int _symptomsAlternateAdviceToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedReachability;
-(BOOL)anyFailures;
-(BOOL)networkAvailable;
-(id)init;
-(void)_reachabilityChanged:(id)arg0 ;
-(void)_resetErrors;
-(void)dealloc;
-(void)reportLoadFailure:(id)arg0 ;
-(void)reportTileLoadSuccess:(id)arg0 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg0 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg0 ;


@end


#endif