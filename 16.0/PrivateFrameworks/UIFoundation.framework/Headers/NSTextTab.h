// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSTEXTTAB_H
#define NSTEXTTAB_H

@class NSDictionary;
@protocol NSCopying, NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSTextTab : NSObject <NSCopying, NSCoding, NSSecureCoding>

 {
    ? _flags;
    CGFloat _location;
    id *_reserved;
}


@property (readonly, nonatomic) NSInteger alignment;
@property (readonly, nonatomic) CGFloat location;
@property (readonly, nonatomic) NSDictionary *options;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)columnTerminatorsForLocale:(id)arg0 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)tabStopType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTextAlignment:(NSInteger)arg0 location:(CGFloat)arg1 options:(id)arg2 ;
-(id)initWithType:(NSUInteger)arg0 location:(CGFloat)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)release;


@end


#endif