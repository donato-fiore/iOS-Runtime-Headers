// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISIZEVALUE_H
#define SKUISIZEVALUE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUISizeValue : NSObject <NSCopying>

 {
    NSInteger _height;
    NSInteger _width;
}


@property (readonly, nonatomic) CGSize size;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSize:(struct CGSize )arg0 ;
-(void)unionWithSize:(struct CGSize )arg0 ;


@end


#endif