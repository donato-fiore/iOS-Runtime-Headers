// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INTARRAY2D_H
#define _INTARRAY2D_H


#import <Foundation/Foundation.h>


@interface _IntArray2D : NSObject {
    *NSInteger _arrayData;
}


@property (readonly, nonatomic) NSUInteger iSize; // ivar: _iSize
@property (readonly, nonatomic) NSUInteger jSize; // ivar: _jSize
@property (nonatomic) BOOL shouldBoundsCheck; // ivar: _shouldBoundsCheck


+(id)arrayWithISize:(NSUInteger)arg0 jSize:(NSUInteger)arg1 ;
-(BOOL)inBoundsForIIndex:(NSUInteger)arg0 jIndex:(NSUInteger)arg1 ;
-(NSInteger);
-(NSInteger)outOfBoundsReturnValue:(NSInteger)arg2 ;
-(id)description;
-(id)initWithISize:(NSUInteger)arg0 jSize:(NSUInteger)arg1 ;
-(void)assertBoundsForIIndex:(NSUInteger)arg0 jIndex:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)newValue:(NSInteger)arg2 ;


@end


#endif