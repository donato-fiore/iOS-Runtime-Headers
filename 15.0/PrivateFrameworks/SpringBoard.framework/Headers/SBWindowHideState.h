// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWINDOWHIDESTATE_H
#define SBWINDOWHIDESTATE_H


#import <Foundation/Foundation.h>


@interface SBWindowHideState : NSObject

@property CGFloat desiredAlpha; // ivar: _desiredAlpha
@property (getter=isHidden) BOOL hidden; // ivar: _hidden


-(id)description;


@end


#endif