// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYERCOMMANDREQUEST_H
#define MPCPLAYERCOMMANDREQUEST_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "MPCMediaRemoteController.h"
#import "MPCPlayerPath.h"

@interface MPCPlayerCommandRequest : NSObject

@property (readonly, nonatomic) unsigned int command; // ivar: _command
@property (readonly, nonatomic) MPCMediaRemoteController *controller; // ivar: _controller
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *originalLabel; // ivar: _originalLabel
@property (readonly, nonatomic) MPCPlayerPath *playerPath; // ivar: _playerPath
@property (copy, nonatomic) id *statusTransformer; // ivar: _statusTransformer
@property (copy, nonatomic) NSDictionary *userInitiatedOptions; // ivar: _userInitiatedOptions


-(id)description;
-(id)initWithMediaRemoteCommand:(unsigned int)arg0 options:(id)arg1 controller:(id)arg2 label:(id)arg3 ;
-(id)initWithMediaRemoteCommand:(unsigned int)arg0 options:(id)arg1 playerPath:(id)arg2 label:(id)arg3 ;


@end


#endif