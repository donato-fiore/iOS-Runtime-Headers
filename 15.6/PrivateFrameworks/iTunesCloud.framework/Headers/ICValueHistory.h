// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICVALUEHISTORY_H
#define ICVALUEHISTORY_H

@class NSMutableArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICValueHistory : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableArray *_items;
}


@property (readonly, nonatomic) NSInteger count;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)firstValueAfterOrEqualToTimestamp:(NSUInteger)arg0 ;
-(id)firstValueBeforeOrEqualToTimestamp:(NSUInteger)arg0 ;
-(id)firstValueBeforeTimestamp:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)lastValue;
-(id)lastValueAndTimestamp:(*NSUInteger)arg0 ;
-(void)addValue:(id)arg0 timestamp:(NSUInteger)arg1 ;
-(void)addValuesFromHistory:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateValuesUsingBlock:(id)arg0 ;
-(void)removeAllValues;
-(void)removeValuesBeforeTimestamp:(NSUInteger)arg0 ;


@end


#endif