// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPESCROWRECORDVIABILITY_H
#define CDPESCROWRECORDVIABILITY_H

@protocol CDPInitUnavailable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CDPEscrowRecordViability : NSObject <CDPInitUnavailable, NSCopying, NSSecureCoding>



@property (nonatomic) BOOL hasMachineId; // ivar: _hasMachineId
@property (readonly, nonatomic) BOOL hasRecords; // ivar: _hasRecords
@property (readonly, nonatomic) NSUInteger pcsRecoveryViability; // ivar: _pcsRecoveryViability
@property (readonly, nonatomic) NSUInteger recordViability; // ivar: _recordViability
@property (readonly, nonatomic) NSUInteger sosViability; // ivar: _sosViability
@property (readonly, nonatomic) NSUInteger tlkRecoveryViability; // ivar: _tlkRecoveryViability


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordPresence:(BOOL)arg0 recordViability:(NSUInteger)arg1 tlkRecoveryViability:(NSUInteger)arg2 sosViability:(NSUInteger)arg3 pcsRecoveryViability:(NSUInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif