// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCACONNECTIONCLOSEDSTATE_H
#define CTCACONNECTIONCLOSEDSTATE_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCAConnectionClosedState : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDate *closedAt; // ivar: _closedAt
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (nonatomic) NSUInteger wasActiveServices; // ivar: _wasActiveServices


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif