// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCASILENCEINTERVAL_H
#define CTCASILENCEINTERVAL_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCASilenceInterval : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDate *endsAt; // ivar: _endsAt
@property (retain, nonatomic) NSDate *startsAt; // ivar: _startsAt


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif