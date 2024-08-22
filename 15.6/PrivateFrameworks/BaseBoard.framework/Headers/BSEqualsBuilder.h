// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSEQUALSBUILDER_H
#define BSEQUALSBUILDER_H


#import <Foundation/Foundation.h>


@interface BSEqualsBuilder : NSObject {
    BOOL _equal;
}




+(id)builder;
+(id)builderWithObject:(id)arg0 ofExpectedClass:(Class)arg1 ;
-(BOOL)isEqual;
-(id)appendArray:(id)arg0 counterpart:(id)arg1 ;
-(id)appendBool:(BOOL)arg0 counterpart:(id)arg1 ;
-(id)appendCGFloat:(CGFloat)arg0 counterpart:(id)arg1 ;
-(id)appendCGPoint:(struct CGPoint )arg0 counterpart:(id)arg1 ;
-(id)appendCGRect:(struct CGRect )arg0 counterpart:(id)arg1 ;
-(id)appendCGSize:(struct CGSize )arg0 counterpart:(id)arg1 ;
-(id)appendClass:(Class)arg0 counterpart:(id)arg1 ;
-(id)appendDouble:(CGFloat)arg0 counterpart:(id)arg1 ;
-(id)appendEqualsBlocks:(id)arg0 ;
-(id)appendFloat:(float)arg0 counterpart:(id)arg1 ;
-(id)appendInt64:(NSInteger)arg0 counterpart:(id)arg1 ;
-(id)appendInteger:(NSInteger)arg0 counterpart:(id)arg1 ;
-(id)appendObject:(id)arg0 counterpart:(id)arg1 ;
-(id)appendPointer:(*void)arg0 counterpart:(id)arg1 ;
-(id)appendSizeT:(NSUInteger)arg0 counterpart:(id)arg1 ;
-(id)appendString:(id)arg0 counterpart:(id)arg1 ;
-(id)appendUnsignedInteger:(NSUInteger)arg0 counterpart:(id)arg1 ;
-(id)init;


@end


#endif