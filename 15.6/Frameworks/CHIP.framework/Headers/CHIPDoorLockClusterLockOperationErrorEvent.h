// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERLOCKOPERATIONERROREVENT_H
#define CHIPDOORLOCKCLUSTERLOCKOPERATIONERROREVENT_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterLockOperationErrorEvent : NSObject

@property (retain, nonatomic) NSArray *credentials; // ivar: _credentials
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSNumber *lockOperationType; // ivar: _lockOperationType
@property (retain, nonatomic) NSNumber *operationError; // ivar: _operationError
@property (retain, nonatomic) NSNumber *operationSource; // ivar: _operationSource
@property (retain, nonatomic) NSNumber *sourceNode; // ivar: _sourceNode
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex


-(id)init;


@end


#endif