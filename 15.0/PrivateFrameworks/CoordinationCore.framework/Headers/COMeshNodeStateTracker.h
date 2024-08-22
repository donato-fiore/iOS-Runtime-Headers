// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMESHNODESTATETRACKER_H
#define COMESHNODESTATETRACKER_H

@protocol COMeshNodeStateTrackerDelegate;

#import <Foundation/Foundation.h>

#import "COBallot.h"
#import "COMeshNode.h"

@interface COMeshNodeStateTracker : NSObject

@property (copy, nonatomic) COBallot *ballot; // ivar: _ballot
@property (weak, nonatomic) NSObject<COMeshNodeStateTrackerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger generation; // ivar: _generation
@property (nonatomic) CGFloat lastHeard; // ivar: _lastHeard
@property (readonly, nonatomic) COMeshNode *node; // ivar: _node
@property (nonatomic, getter=hasOutstandingProbe) BOOL outstandingProbe; // ivar: _outstandingProbe
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) NSInteger status; // ivar: _status


-(id)description;
-(id)initWithNode:(id)arg0 ;


@end


#endif