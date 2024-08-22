// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DTRANSFORMS_H
#define TSCH3DTRANSFORMS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSCH3DTransforms : NSObject {
    NSMutableArray *_array;
}


@property (readonly, nonatomic) tvec2<int> size; // ivar: _size


+(id)transforms;
+(id)transformsWithSize:(struct tvec2<int> )arg0 ;
-(NSInteger)arrayIndex:(struct tvec2<int> )arg0 ;
-(id)transformAtIndex:(struct tvec2<int> )arg0 ;
-(void)setTransform:(id)arg0 atIndex:(struct tvec2<int> )arg1 ;


@end


#endif