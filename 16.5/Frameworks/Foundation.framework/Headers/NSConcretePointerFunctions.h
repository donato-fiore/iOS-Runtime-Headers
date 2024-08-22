// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCONCRETEPOINTERFUNCTIONS_H
#define NSCONCRETEPOINTERFUNCTIONS_H



#import "NSPointerFunctions.h"

@interface NSConcretePointerFunctions : NSPointerFunctions {
    NSSlice slice;
}




+(BOOL)initializeSlice:(struct NSSlice *)arg0 withOptions:(NSUInteger)arg1 ;
+(void)initializeBackingStore:(struct NSSlice *)arg0 sentinel:(BOOL)arg1 dynamic:(BOOL)arg2 ;
-(*unk)acquireFunction;
-(*unk)descriptionFunction;
-(*unk)hashFunction;
-(*unk)isEqualFunction;
-(*unk)relinquishFunction;
-(*unk)sizeFunction;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)usesStrongWriteBarrier;
-(BOOL)usesWeakReadAndWriteBarriers;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setAcquireFunction:(*unk)arg0 ;
-(void)setDescriptionFunction:(*unk)arg0 ;
-(void)setHashFunction:(*unk)arg0 ;
-(void)setIsEqualFunction:(*unk)arg0 ;
-(void)setRelinquishFunction:(*unk)arg0 ;
-(void)setSizeFunction:(*unk)arg0 ;
-(void)setUsesStrongWriteBarrier:(BOOL)arg0 ;
-(void)setUsesWeakReadAndWriteBarriers:(BOOL)arg0 ;


@end


#endif