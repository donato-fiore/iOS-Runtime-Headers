// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRSENDCOMMANDMESSAGE_H
#define MRSENDCOMMANDMESSAGE_H

@class NSDictionary, NSDate;


#import "MRProtocolMessage.h"
#import "MRPlayerPath.h"

@interface MRSendCommandMessage : MRProtocolMessage {
    NSDictionary *_options;
}


@property (readonly, nonatomic) unsigned int appOptions;
@property (readonly, nonatomic) unsigned int command;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) NSDate *serializationDate; // ivar: _serializationDate


-(NSUInteger)type;
-(id)initWithCommand:(unsigned int)arg0 options:(id)arg1 playerPath:(id)arg2 ;


@end


#endif