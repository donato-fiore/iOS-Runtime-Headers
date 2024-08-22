// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINTEGERSET_H
#define HKINTEGERSET_H

@protocol NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HKIntegerSet : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

 {
    *__CFSet _set;
}


@property (readonly, nonatomic) NSUInteger count;


+(BOOL)supportsSecureCoding;
-(BOOL)containsInteger:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIndex:(NSInteger)arg0 ;
-(id)initWithSet:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateIntegersUsingBlock:(id)arg0 ;


@end


#endif