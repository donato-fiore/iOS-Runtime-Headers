// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPDRAWABLESZORDER_H
#define TPDRAWABLESZORDER_H

@class TSPObject, NSMutableArray;



@interface TPDrawablesZOrder : TSPObject {
    NSMutableArray *_drawables;
}


@property (readonly, nonatomic) NSUInteger drawableCount;


-(NSUInteger)addDrawable:(id)arg0 ;
-(NSUInteger)insertDrawable:(id)arg0 atZOrder:(NSUInteger)arg1 ;
-(NSUInteger)zOrderOfDrawable:(id)arg0 ;
-(id)drawableAtZOrder:(NSUInteger)arg0 ;
-(id)drawableEnumerator;
-(id)initWithContext:(id)arg0 ;
-(id)orderedDrawables:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)moveDrawable:(id)arg0 toZOrder:(NSUInteger)arg1 ;
-(void)moveDrawableAtZOrder:(NSUInteger)arg0 toZOrder:(NSUInteger)arg1 ;
-(void)moveDrawables:(id)arg0 toIndexes:(id)arg1 ;
-(void)moveDrawables:(id)arg0 toZOrder:(NSUInteger)arg1 ;
-(void)removeDrawable:(id)arg0 ;
-(void)removeDrawableAtZOrder:(NSUInteger)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)swapDrawableAtZOrder:(NSUInteger)arg0 withDrawableAtZOrder:(NSUInteger)arg1 ;


@end


#endif