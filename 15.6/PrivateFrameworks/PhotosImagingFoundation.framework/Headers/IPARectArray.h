// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPARECTARRAY_H
#define IPARECTARRAY_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface IPARectArray : NSObject <NSCopying, NSMutableCopying>

 {
    *void _imp;
}




+(id)rectArray;
+(id)rectArrayWithRect:(struct CGRect )arg0 ;
-(BOOL)isEmpty;
-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRect:(struct CGRect )arg0 ;
-(id)initWithRectArray:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct CGRect )rectAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)enumerateRects:(id)arg0 ;


@end


#endif