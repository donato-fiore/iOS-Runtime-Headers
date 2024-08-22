// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMDATAPOINTVALUE_H
#define AXMDATAPOINTVALUE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AXMDataPointValue : NSObject <NSCopying>



@property (copy, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) BOOL isEmptyValue; // ivar: _isEmptyValue
@property (nonatomic) CGFloat number; // ivar: _number


+(id)emptyValue;
+(id)valueWithCategory:(id)arg0 ;
+(id)valueWithNumber:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif