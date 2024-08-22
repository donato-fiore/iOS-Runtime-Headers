// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRECORDOPERATIONLOGEVENT_H
#define HMDRECORDOPERATIONLOGEVENT_H

@class HMMLogEvent;



@interface HMDRecordOperationLogEvent : HMMLogEvent

@property (readonly, nonatomic, getter=isLegacy) BOOL legacy; // ivar: _legacy
@property (readonly, nonatomic) NSUInteger size; // ivar: _size


-(id)initWithSize:(NSUInteger)arg0 isLegacy:(BOOL)arg1 ;


@end


#endif