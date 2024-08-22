// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARGEOTRACKINGSTATUS_H
#define ARGEOTRACKINGSTATUS_H

@protocol ARDaemonSecureCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARGeoTrackingStatus : NSObject <ARDaemonSecureCoding, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger accuracy; // ivar: _accuracy
@property (readonly, nonatomic) NSInteger failureReasons; // ivar: _failureReasons
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSInteger stateReason; // ivar: _stateReason


+(BOOL)supportsSecureCoding;
+(id)initialStatus;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualPrivate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeoTrackingState:(NSInteger)arg0 accuracy:(NSInteger)arg1 stateReason:(NSInteger)arg2 failureReasons:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif