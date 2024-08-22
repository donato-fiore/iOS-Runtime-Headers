// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRCOMMANDRESULT_H
#define MRCOMMANDRESULT_H

@class NSError, NSArray;

#import <Foundation/Foundation.h>

#import "MRPlayerPath.h"

@interface MRCommandResult : NSObject

@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) NSArray *handlerReturnStatuses;
@property (readonly, copy, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath
@property (copy, nonatomic) NSArray *resultStatuses; // ivar: _resultStatuses
@property (nonatomic) unsigned int sendError; // ivar: _sendError


+(id)commandResultWithSendError:(unsigned int)arg0 ;
-(id)data;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithHandlerStatuses:(id)arg0 sendError:(unsigned int)arg1 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithResultStatuses:(id)arg0 sendError:(unsigned int)arg1 playerPath:(id)arg2 ;
-(id)protobuf;


@end


#endif