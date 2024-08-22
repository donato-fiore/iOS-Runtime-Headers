// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRNOWPLAYINGCLIENTCOMMANDQUEUEENTRY_H
#define MRNOWPLAYINGCLIENTCOMMANDQUEUEENTRY_H

@class NSDate, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "MRPlayerPath.h"

@interface MRNowPlayingClientCommandQueueEntry : NSObject

@property (nonatomic) unsigned int command; // ivar: _command
@property (copy, nonatomic) id *commandCompletion; // ivar: _commandCompletion
@property (retain, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (retain, nonatomic) NSMutableDictionary *options; // ivar: _options
@property (retain, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath


-(id)description;


@end


#endif