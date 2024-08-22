// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUTRAIT_H
#define NUTRAIT_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NUTrait : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat defaultValue; // ivar: _defaultValue
@property (readonly, nonatomic) NSMutableDictionary *traitBlocks; // ivar: _traitBlocks


-(CGFloat)valueForTraitCollection:(id)arg0 size:(struct CGSize )arg1 ;
-(CGFloat)valueForTraitCollection:(id)arg0 size:(struct CGSize )arg1 deviceTrait:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDefaultValue:(CGFloat)arg0 ;
-(id)when:(NSUInteger)arg0 block:(id)arg1 ;


@end


#endif