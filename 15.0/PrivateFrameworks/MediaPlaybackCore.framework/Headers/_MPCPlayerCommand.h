// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCPLAYERCOMMAND_H
#define _MPCPLAYERCOMMAND_H


#import <Foundation/Foundation.h>

#import "MPCPlayerPath.h"
#import "MPCPlayerResponse.h"

@interface _MPCPlayerCommand : NSObject

@property (readonly, copy, nonatomic) MPCPlayerPath *playerPath; // ivar: _playerPath
@property (readonly, nonatomic) MPCPlayerResponse *response; // ivar: _response


-(id)initWithPlayerPath:(id)arg0 ;
-(id)initWithResponse:(id)arg0 ;


@end


#endif