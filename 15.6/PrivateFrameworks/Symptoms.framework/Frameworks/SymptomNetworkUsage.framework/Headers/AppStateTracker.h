// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPSTATETRACKER_H
#define APPSTATETRACKER_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface AppStateTracker : NSObject

@property (retain) NSString *bundleName; // ivar: _bundleName
@property (retain) NSString *displayName; // ivar: _displayName
@property int pid; // ivar: _pid
@property unsigned int state; // ivar: _state
@property (retain) NSUUID *uuid; // ivar: _uuid


-(id)description;


@end


#endif