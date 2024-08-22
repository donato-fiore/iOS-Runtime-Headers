// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCASERVICEINTERVALS_H
#define CTCASERVICEINTERVALS_H

@class NSArray, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCAServiceIntervals : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL atStart; // ivar: _atStart
@property (retain, nonatomic) NSArray *changesAt; // ivar: _changesAt
@property (retain, nonatomic) NSDate *endsAt; // ivar: _endsAt
@property (retain, nonatomic) NSDate *startsAt; // ivar: _startsAt


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif