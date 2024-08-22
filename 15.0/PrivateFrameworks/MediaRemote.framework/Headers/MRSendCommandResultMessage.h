// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRSENDCOMMANDRESULTMESSAGE_H
#define MRSENDCOMMANDRESULTMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRCommandResult.h"

@interface MRSendCommandResultMessage : MRProtocolMessage {
    MRCommandResult *_commandResult;
}


@property (readonly, nonatomic) MRCommandResult *commandResult;


-(NSUInteger)type;
-(id)initWithCommandID:(id)arg0 commandResult:(id)arg1 ;
-(unsigned int)sendError;


@end


#endif