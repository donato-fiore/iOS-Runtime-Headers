// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMTIMELAPSEBACKENDSESSIONCONTEXT_H
#define CAMTIMELAPSEBACKENDSESSIONCONTEXT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "CAMTimelapseState.h"

@interface CAMTimelapseBackendSessionContext : NSObject

@property (retain, nonatomic) NSArray *filesToDelete; // ivar: _filesToDelete
@property (retain, nonatomic) NSArray *filesToWrite; // ivar: _filesToWrite
@property (retain, nonatomic) CAMTimelapseState *state; // ivar: _state
@property (readonly, nonatomic) NSString *timelapseUUID; // ivar: _timelapseUUID


-(id)description;
-(id)init;
-(id)initWithTimelapseUUID:(id)arg0 ;


@end


#endif