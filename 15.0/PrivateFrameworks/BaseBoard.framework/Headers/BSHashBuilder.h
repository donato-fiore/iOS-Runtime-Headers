// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSHASHBUILDER_H
#define BSHASHBUILDER_H


#import <Foundation/Foundation.h>


@interface BSHashBuilder : NSObject {
    NSUInteger _hash;
}




+(id)builder;
-(NSUInteger)hash;
-(id)appendArray:(id)arg0 ;
-(id)appendBool:(BOOL)arg0 ;
-(id)appendBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)appendCGFloat:(CGFloat)arg0 ;
-(id)appendCGPoint:(struct CGPoint )arg0 ;
-(id)appendCGRect:(struct CGRect )arg0 ;
-(id)appendCGSize:(struct CGSize )arg0 ;
-(id)appendClass:(Class)arg0 ;
-(id)appendDouble:(CGFloat)arg0 ;
-(id)appendFloat:(float)arg0 ;
-(id)appendHashingBlocks:(id)arg0 ;
-(id)appendInt64:(NSInteger)arg0 ;
-(id)appendInteger:(NSInteger)arg0 ;
-(id)appendObject:(id)arg0 ;
-(id)appendPoint:(struct CGPoint )arg0 ;
-(id)appendPointer:(*void)arg0 ;
-(id)appendRect:(struct CGRect )arg0 ;
-(id)appendSize:(struct CGSize )arg0 ;
-(id)appendSizeT:(NSUInteger)arg0 ;
-(id)appendString:(id)arg0 ;
-(id)appendUnsignedInteger:(NSUInteger)arg0 ;


@end


#endif