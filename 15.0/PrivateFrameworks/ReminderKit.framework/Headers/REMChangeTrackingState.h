// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMCHANGETRACKINGSTATE_H
#define REMCHANGETRACKINGSTATE_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMChangeToken.h"

@interface REMChangeTrackingState : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) REMChangeToken *lastConsumedChangeToken; // ivar: _lastConsumedChangeToken
@property (retain, nonatomic) NSDate *lastConsumedDate; // ivar: _lastConsumedDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif