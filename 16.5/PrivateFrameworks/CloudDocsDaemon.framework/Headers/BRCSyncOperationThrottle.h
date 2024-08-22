// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSYNCOPERATIONTHROTTLE_H
#define BRCSYNCOPERATIONTHROTTLE_H

@class BRMangledID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, nonatomic) BOOL isSyncDown; // ivar: _isSyncDown
@property (readonly, nonatomic) int lastErrorKind; // ivar: _lastErrorKind
@property (retain, nonatomic) BRMangledID *mangledID; // ivar: _mangledID
@property (readonly, nonatomic) CGFloat nextTry; // ivar: _nextTry


+(BOOL)supportsSecureCoding;
-(BOOL)scheduleIfPossibleWithCurrentTimestamp:(NSInteger)arg0 signalSourceIfFailed:(id)arg1 description:(id)arg2 ;
-(BOOL)updateForClearingOutOfQuota;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMangledID:(id)arg0 isSyncDown:(BOOL)arg1 ;
-(void)clear;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateAfterSchedulingTask;
-(void)updateAfterSchedulingTaskWithMinimumDelay:(CGFloat)arg0 ;
-(void)updateForError:(id)arg0 ;


@end


#endif