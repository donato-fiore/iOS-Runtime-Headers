// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDATERANGE_H
#define PXDATERANGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXDateRange : NSObject <NSCopying>



@property (readonly) CGFloat endDate; // ivar: _endDate
@property (readonly) CGFloat startDate; // ivar: _startDate


-(BOOL)intersectsRange:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isStrictlyBeforeRange:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithStartDate:(CGFloat)arg0 endDate:(CGFloat)arg1 ;


@end


#endif