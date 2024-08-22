// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DARRAY2D_H
#define TSCH3DARRAY2D_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSCH3DArray2D : NSObject {
    NSMutableArray *_elements;
}


@property (readonly, nonatomic) tvec2<int> size; // ivar: _size


+(id)array2D;
+(id)array2DWithSize:(*void)arg0 ;
-(BOOL)hasObjectAtIndex:(*void)arg0 ;
-(id)firstObject;
-(id)initWithSize:(*void)arg0 ;
-(id)objectAtIndex:(*void)arg0 ;
-(void)resize:(*void)arg0 ;
-(void)setObject:(id)arg0 atIndex:(*void)arg1 ;


@end


#endif