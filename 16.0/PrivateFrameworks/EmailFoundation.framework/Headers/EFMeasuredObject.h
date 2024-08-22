// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFMEASUREDOBJECT_H
#define EFMEASUREDOBJECT_H


#import <Foundation/Foundation.h>


@interface EFMeasuredObject : NSObject

@property (nonatomic) CGFloat measure; // ivar: _measure
@property (retain, nonatomic) id *object; // ivar: _object


+(id)max:(id)arg0 ;
+(id)object:(id)arg0 withMeasure:(CGFloat)arg1 ;
+(id)reverseSortedObjects:(id)arg0 limit:(NSUInteger)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithObject:(id)arg0 measure:(CGFloat)arg1 ;


@end


#endif