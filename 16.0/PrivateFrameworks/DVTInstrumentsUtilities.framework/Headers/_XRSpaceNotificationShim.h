// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _XRSPACENOTIFICATIONSHIM_H
#define _XRSPACENOTIFICATIONSHIM_H

@protocol NSObject;

#import <Foundation/Foundation.h>

#import "XRSpace.h"

@interface _XRSpaceNotificationShim : NSObject

@property (weak, nonatomic) NSObject<NSObject> *observer; // ivar: _observer
@property (weak, nonatomic) XRSpace *space; // ivar: _space
@property (weak, nonatomic) NSObject<NSObject> *target; // ivar: _target
@property (nonatomic) BOOL targetIsSet; // ivar: _targetIsSet
@property (retain, nonatomic) NSObject<NSObject> *token; // ivar: _token


-(void)dealloc;


@end


#endif