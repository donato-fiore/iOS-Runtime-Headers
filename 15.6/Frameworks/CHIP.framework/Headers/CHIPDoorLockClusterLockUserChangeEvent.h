// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERLOCKUSERCHANGEEVENT_H
#define CHIPDOORLOCKCLUSTERLOCKUSERCHANGEEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterLockUserChangeEvent : NSObject

@property (retain, nonatomic) NSNumber *dataIndex; // ivar: _dataIndex
@property (retain, nonatomic) NSNumber *dataOperationType; // ivar: _dataOperationType
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSNumber *lockDataType; // ivar: _lockDataType
@property (retain, nonatomic) NSNumber *operationSource; // ivar: _operationSource
@property (retain, nonatomic) NSNumber *sourceNode; // ivar: _sourceNode
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex


-(id)init;


@end


#endif