// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APPSTATETRACKER_H
#define APPSTATETRACKER_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface AppStateTracker : NSObject

@property BOOL foreground; // ivar: _foreground
@property (retain) NSString *identifier; // ivar: _identifier
@property int pid; // ivar: _pid
@property (retain) NSUUID *uuid; // ivar: _uuid


-(id)description;


@end


#endif