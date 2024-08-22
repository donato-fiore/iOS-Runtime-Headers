// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDOORLOCKCLUSTERLOCKUSERCHANGEEVENT_H
#define MTRDOORLOCKCLUSTERLOCKUSERCHANGEEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterLockUserChangeEvent : NSObject

@property (retain, nonatomic) NSNumber *dataIndex; // ivar: _dataIndex
@property (retain, nonatomic) NSNumber *dataOperationType; // ivar: _dataOperationType
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSNumber *lockDataType; // ivar: _lockDataType
@property (retain, nonatomic) NSNumber *operationSource; // ivar: _operationSource
@property (retain, nonatomic) NSNumber *sourceNode; // ivar: _sourceNode
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex


-(id)description;
-(id)init;


@end


#endif