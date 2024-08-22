// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRCOMMANDRESULT_H
#define MRCOMMANDRESULT_H

@class NSError, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MRPlayerPath.h"

@interface MRCommandResult : NSObject <NSCopying>



@property (nonatomic) unsigned int endQOS; // ivar: _endQOS
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) NSArray *handlerReturnStatuses;
@property (copy, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath
@property (copy, nonatomic) NSArray *resultStatuses; // ivar: _resultStatuses
@property (nonatomic) unsigned int sendError; // ivar: _sendError
@property (retain, nonatomic) NSString *sendErrorDescription; // ivar: _sendErrorDescription
@property (nonatomic) unsigned int startQOS; // ivar: _startQOS


+(id)commandResultWithSendError:(unsigned int)arg0 ;
+(id)commandResultWithSendError:(unsigned int)arg0 description:(id)arg1 ;
-(id)copyWithPlayerPath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithHandlerStatuses:(id)arg0 sendError:(unsigned int)arg1 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithResultStatuses:(id)arg0 sendError:(unsigned int)arg1 playerPath:(id)arg2 ;
-(id)initWithWithSendError:(unsigned int)arg0 description:(id)arg1 ;
-(id)protobuf;


@end


#endif