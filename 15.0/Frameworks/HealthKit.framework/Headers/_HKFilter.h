// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKFILTER_H
#define _HKFILTER_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _HKFilter : NSObject <NSSecureCoding, NSCopying>





+(BOOL)filter:(id)arg0 acceptsActivitySummary:(id)arg1 ;
+(BOOL)filter:(id)arg0 acceptsDataObject:(id)arg1 ;
+(BOOL)filter:(id)arg0 acceptsDataObjectWithStartTimestamp:(CGFloat)arg1 endTimestamp:(CGFloat)arg2 valueInCanonicalUnit:(CGFloat)arg3 ;
+(BOOL)supportsSecureCoding;
-(BOOL)acceptsDataObject:(id)arg0 ;
-(NSInteger)acceptsActivitySummary:(id)arg0 ;
-(NSInteger)acceptsDataObjectWithStartTimestamp:(CGFloat)arg0 endTimestamp:(CGFloat)arg1 valueInCanonicalUnit:(CGFloat)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif