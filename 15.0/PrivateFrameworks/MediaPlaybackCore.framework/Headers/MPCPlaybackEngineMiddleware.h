// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCPLAYBACKENGINEMIDDLEWARE_H
#define MPCPLAYBACKENGINEMIDDLEWARE_H

@class NSString, NSArray;
@protocol MPCPlayerResponseBuilder, MPMiddleware;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"

@interface MPCPlaybackEngineMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *invalidationObservers; // ivar: _invalidationObservers
@property (retain, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(id)_stateDumpObject;
-(id)operationsForPlayerRequest:(id)arg0 ;
-(id)operationsForRequest:(id)arg0 ;
-(id)playerVideoView:(id)arg0 chain:(id)arg1 ;
-(id)videoOutput:(id)arg0 chain:(id)arg1 ;


@end


#endif