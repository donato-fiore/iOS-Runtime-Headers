// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCHANGEHISTORYEVENT_H
#define CNCHANGEHISTORYEVENT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNChangeHistoryEvent : NSObject <NSCopying, NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(NSUInteger)instanceSortOrder;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)comparisonResultBetweenClasses:(id)arg0 ;
-(NSInteger)comparisonResultWithinSameClass:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)acceptEventVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif