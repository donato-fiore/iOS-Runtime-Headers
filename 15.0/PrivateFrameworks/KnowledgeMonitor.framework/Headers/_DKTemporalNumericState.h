// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKTEMPORALNUMERICSTATE_H
#define _DKTEMPORALNUMERICSTATE_H

@class NSNumber, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DKTemporalNumericState : NSObject <NSSecureCoding>



@property (retain) NSNumber *state; // ivar: _state
@property (retain) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(id)arg0 timestamp:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif