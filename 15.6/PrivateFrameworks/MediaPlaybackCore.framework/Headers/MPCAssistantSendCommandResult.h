// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCASSISTANTSENDCOMMANDRESULT_H
#define MPCASSISTANTSENDCOMMANDRESULT_H

@class MRCommandResult, NSNumber, NSError, NSArray;

#import <Foundation/Foundation.h>


@interface MPCAssistantSendCommandResult : NSObject

@property (readonly, nonatomic) MRCommandResult *commandResult; // ivar: _commandResult
@property (copy, nonatomic) NSNumber *devicesControlled; // ivar: _devicesControlled
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSArray *returnStatuses; // ivar: _returnStatuses


-(id)initWithCommandResult:(id)arg0 error:(id)arg1 ;
-(id)initWithReturnStatuses:(id)arg0 error:(id)arg1 ;


@end


#endif