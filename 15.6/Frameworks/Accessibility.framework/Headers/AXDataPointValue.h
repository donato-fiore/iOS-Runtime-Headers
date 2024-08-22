// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXDATAPOINTVALUE_H
#define AXDATAPOINTVALUE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AXDataPointValue : NSObject <NSCopying>



@property (copy, nonatomic) NSString *category; // ivar: _category
@property (nonatomic) CGFloat number; // ivar: _number


+(id)valueWithCategory:(id)arg0 ;
+(id)valueWithNumber:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif