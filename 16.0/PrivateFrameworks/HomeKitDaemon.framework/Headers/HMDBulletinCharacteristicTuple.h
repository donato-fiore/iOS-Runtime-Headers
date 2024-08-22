// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBULLETINCHARACTERISTICTUPLE_H
#define HMDBULLETINCHARACTERISTICTUPLE_H

@class HMFObject, NSString, NSDate, NSNumber;



@interface HMDBulletinCharacteristicTuple : HMFObject

@property (readonly, nonatomic) BOOL changedByThisDevice; // ivar: _changedByThisDevice
@property (readonly, nonatomic) NSString *currentType; // ivar: _currentType
@property (retain, nonatomic) NSDate *lastPostingTime; // ivar: _lastPostingTime
@property (readonly, nonatomic) NSString *serviceContextID; // ivar: _serviceContextID
@property (readonly, nonatomic) NSNumber *targetStateNumber; // ivar: _targetStateNumber
@property (readonly, nonatomic) id *targetValue; // ivar: _targetValue


+(id)tupleWithServiceContextID:(id)arg0 currentType:(id)arg1 targetValue:(id)arg2 targetStateNumber:(id)arg3 changedByThisDevice:(BOOL)arg4 ;
-(id)initWithServiceContextID:(id)arg0 currentType:(id)arg1 targetValue:(id)arg2 targetStateNumber:(id)arg3 changedByThisDevice:(BOOL)arg4 ;
-(void)updatePostingTime;


@end


#endif