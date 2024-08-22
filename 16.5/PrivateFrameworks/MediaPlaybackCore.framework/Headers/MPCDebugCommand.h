// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCDEBUGCOMMAND_H
#define MPCDEBUGCOMMAND_H

@class MPRemoteCommand, NSDictionary, NSArray;



@interface MPCDebugCommand : MPRemoteCommand

@property (copy, nonatomic) NSDictionary *subsystemRevisions; // ivar: _subsystemRevisions
@property (copy, nonatomic) NSArray *supportedSubsystems; // ivar: _supportedSubsystems


-(id)_mediaRemoteCommandInfoOptions;
-(id)initWithMediaRemoteCommandType:(unsigned int)arg0 ;


@end


#endif