// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNHASHBUILDER_H
#define CNHASHBUILDER_H


#import <Foundation/Foundation.h>


@interface CNHashBuilder : NSObject



+(NSUInteger)arrayHash:(id)arg0 ;
+(NSUInteger)boolHash:(BOOL)arg0 ;
+(NSUInteger)cgfloatHash:(CGFloat)arg0 ;
+(NSUInteger)cgpointHash:(struct CGPoint )arg0 ;
+(NSUInteger)cgrectHash:(struct CGRect )arg0 ;
+(NSUInteger)cgsizeHash:(struct CGSize )arg0 ;
+(NSUInteger)dictionaryHash:(id)arg0 ;
+(NSUInteger)hashWithBlocks:(id)arg0 ;
+(NSUInteger)integerHash:(NSInteger)arg0 ;
+(NSUInteger)objectHash:(id)arg0 ;
+(NSUInteger)orderedSetHash:(id)arg0 ;
+(NSUInteger)pointerHash:(*void)arg0 ;
+(NSUInteger)setHash:(id)arg0 ;
+(NSUInteger)unsignedIntegerHash:(NSUInteger)arg0 ;


@end


#endif