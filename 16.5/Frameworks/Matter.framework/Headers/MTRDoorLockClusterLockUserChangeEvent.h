// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDOORLOCKCLUSTERLOCKUSERCHANGEEVENT_H
#define MTRDOORLOCKCLUSTERLOCKUSERCHANGEEVENT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterLockUserChangeEvent : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *dataIndex; // ivar: _dataIndex
@property (copy, nonatomic) NSNumber *dataOperationType; // ivar: _dataOperationType
@property (copy, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (copy, nonatomic) NSNumber *lockDataType; // ivar: _lockDataType
@property (copy, nonatomic) NSNumber *operationSource; // ivar: _operationSource
@property (copy, nonatomic) NSNumber *sourceNode; // ivar: _sourceNode
@property (copy, nonatomic) NSNumber *userIndex; // ivar: _userIndex


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif