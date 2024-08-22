// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPREMOTECOMMANDEVENT_H
#define MPREMOTECOMMANDEVENT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "MPRemoteCommand.h"

@interface MPRemoteCommandEvent : NSObject {
    NSDictionary *_mediaRemoteOptions;
    NSString *_contextID;
    NSString *_commandID;
}


@property (readonly, nonatomic) MPRemoteCommand *command; // ivar: _command
@property (readonly, nonatomic) NSString *commandID;
@property (readonly, nonatomic) NSString *contentItemID;
@property (readonly, nonatomic) NSString *contextID;
@property (readonly, nonatomic) NSString *interfaceID;
@property (readonly, nonatomic) unsigned int mediaRemoteCommandType;
@property (readonly, nonatomic) NSDictionary *mediaRemoteOptions;
@property (readonly, nonatomic) NSInteger playbackQueueOffset;
@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(id)eventWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;
-(id)description;
-(id)init;
-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif