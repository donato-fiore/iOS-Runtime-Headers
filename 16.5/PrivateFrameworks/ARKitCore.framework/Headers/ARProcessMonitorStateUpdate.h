// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARPROCESSMONITORSTATEUPDATE_H
#define ARPROCESSMONITORSTATEUPDATE_H

@class RBSProcessStateUpdate, NSString;

#import <Foundation/Foundation.h>


@interface ARProcessMonitorStateUpdate : NSObject {
    RBSProcessStateUpdate *_update;
}


@property (readonly, nonatomic) NSInteger debugState; // ivar: _debugState
@property (readonly, nonatomic) BOOL isVisible; // ivar: _isVisible
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSInteger taskState; // ivar: _taskState


-(id)description;
-(id)initWithRBSProcessStateUpdate:(id)arg0 ;


@end


#endif