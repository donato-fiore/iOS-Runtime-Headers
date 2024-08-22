// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVSECONDSCREENCONTROLLER_H
#define AVSECONDSCREENCONTROLLER_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>

#import "AVObservationController.h"

@interface AVSecondScreenController : NSObject

@property (nonatomic) BOOL allowsUpdatingActiveConnection; // ivar: _allowsUpdatingActiveConnection
@property (readonly, nonatomic) NSMutableOrderedSet *connections; // ivar: _connections
@property (readonly, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (readonly, nonatomic) NSMutableOrderedSet *secondScreens; // ivar: _secondScreens


+(id)sharedInstance;
-(id)_connectionForPlayer:(id)arg0 ;
-(id)_targetScreen;
-(id)activeConnection;
-(id)addConnectionForPlayer:(id)arg0 playerLayer:(id)arg1 ;
-(id)connectionPassingTest:(id)arg0 ;
-(id)init;
-(id)preferredConnection;
-(void)_insertConnection:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_updateActiveConnection;
-(void)addConnection:(id)arg0 ;
-(void)addSecondScreen:(id)arg0 ;
-(void)dealloc;
-(void)removeConnection:(id)arg0 ;
-(void)removeSecondScreen:(id)arg0 ;
-(void)setPreferredConnection:(id)arg0 ;


@end


#endif