// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NACLISTENINGMODESRECORD_H
#define _NACLISTENINGMODESRECORD_H

@class NSOrderedSet, NSString, NSMutableSet;

#import <Foundation/Foundation.h>


@interface _NACListeningModesRecord : NSObject

@property (retain, nonatomic) NSOrderedSet *availableListeningModes; // ivar: _availableListeningModes
@property (retain, nonatomic) NSString *currentListeningMode; // ivar: _currentListeningMode
@property (retain, nonatomic) NSMutableSet *observers; // ivar: _observers




@end


#endif