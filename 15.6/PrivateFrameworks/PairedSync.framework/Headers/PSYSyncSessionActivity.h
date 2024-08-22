// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSYSYNCSESSIONACTIVITY_H
#define PSYSYNCSESSIONACTIVITY_H

@class NSError;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PSYActivityInfo.h"

@interface PSYSyncSessionActivity : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) PSYActivityInfo *activityInfo; // ivar: _activityInfo
@property (readonly, nonatomic) CGFloat activityProgress; // ivar: _activityProgress
@property (readonly, nonatomic) NSUInteger activityState; // ivar: _activityState
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic, getter=isFinishedSending) BOOL finishedSending; // ivar: _finishedSending
@property (readonly, nonatomic) NSInteger interruptionCount; // ivar: _interruptionCount
@property (readonly, nonatomic) BOOL sawADropout; // ivar: _sawADropout
@property (readonly, nonatomic) NSUInteger startDropoutCount; // ivar: _startDropoutCount


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithActivityInfo:(id)arg0 progress:(CGFloat)arg1 error:(id)arg2 state:(NSUInteger)arg3 finishedSending:(BOOL)arg4 interruptionCount:(NSInteger)arg5 startDropoutCount:(NSUInteger)arg6 sawADropout:(BOOL)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(id)syncSessionActivityByUpdatingProgress:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif