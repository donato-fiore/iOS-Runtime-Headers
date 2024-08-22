// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCSMTT_H
#define PCSMTT_H

@class NSUUID, NSMutableArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PCSMTT : NSObject <NSSecureCoding>



@property (readonly) NSUUID *UUID; // ivar: _UUID
@property (retain) NSMutableArray *completedPoints; // ivar: _completedPoints
@property (readonly) NSUUID *parentUUID; // ivar: _parentUUID
@property BOOL returnedExistingIdentity; // ivar: _returnedExistingIdentity
@property (retain) NSDate *startTime; // ivar: _startTime
@property (readonly) CGFloat time; // ivar: _time


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMTT:(id)arg0 ;
-(id)jsonDict;
-(id)measurePoint:(id)arg0 ;
-(void)completePoint:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)measure:(id)arg0 block:(id)arg1 ;
-(void)measure:(id)arg0 success:(BOOL)arg1 time:(CGFloat)arg2 ;
-(void)start;
-(void)stop;


@end


#endif