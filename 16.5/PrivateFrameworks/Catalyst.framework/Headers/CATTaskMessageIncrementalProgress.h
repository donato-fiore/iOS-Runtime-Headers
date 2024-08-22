// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATTASKMESSAGEINCREMENTALPROGRESS_H
#define CATTASKMESSAGEINCREMENTALPROGRESS_H



#import "CATTaskMessage.h"

@interface CATTaskMessageIncrementalProgress : CATTaskMessage

@property (nonatomic) NSInteger completedUnitCount; // ivar: _completedUnitCount
@property (nonatomic) NSInteger totalUnitCount; // ivar: _totalUnitCount


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTaskUUID:(id)arg0 completedUnitCount:(NSInteger)arg1 totalUnitCount:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif