// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCOREPROGRESS_H
#define SUCOREPROGRESS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUCoreProgress : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat estimatedTimeRemaining; // ivar: _estimatedTimeRemaining
@property (nonatomic) BOOL isStalled; // ivar: _isStalled
@property (retain, nonatomic) NSString *phase; // ivar: _phase
@property (nonatomic) float portionComplete; // ivar: _portionComplete
@property (nonatomic) NSInteger totalExpectedBytes; // ivar: _totalExpectedBytes
@property (nonatomic) NSInteger totalWrittenBytes; // ivar: _totalWrittenBytes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)sameProgress:(id)arg0 isStalled:(BOOL)arg1 portion:(float)arg2 remaining:(CGFloat)arg3 ;
-(id)copy;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhase:(id)arg0 isStalled:(BOOL)arg1 portionComplete:(float)arg2 remaining:(CGFloat)arg3 ;
-(id)initWithPhase:(id)arg0 isStalled:(BOOL)arg1 portionComplete:(float)arg2 totalWrittenBytes:(NSInteger)arg3 totalExpectedBytes:(NSInteger)arg4 remaining:(CGFloat)arg5 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif