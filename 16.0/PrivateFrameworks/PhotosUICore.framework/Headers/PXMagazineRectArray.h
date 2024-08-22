// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMAGAZINERECTARRAY_H
#define PXMAGAZINERECTARRAY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXMagazineRectArray : NSObject <NSCopying>

 {
    *PXMagazineRect _rects;
    NSUInteger _currentIndex;
    NSUInteger _size;
}


@property (readonly, nonatomic) NSUInteger count;
@property (nonatomic) CGFloat score; // ivar: _score


-(NSUInteger)rowsUsed;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSize:(NSUInteger)arg0 ;
-(struct PXMagazineRect )rectAtIndex:(NSUInteger)arg0 ;
-(void)addRect:(struct PXMagazineRect )arg0 ;
-(void)dealloc;
-(void)removeLastRect;


@end


#endif