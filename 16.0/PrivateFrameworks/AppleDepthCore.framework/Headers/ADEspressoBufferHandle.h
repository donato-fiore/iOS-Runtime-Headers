// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADESPRESSOBUFFERHANDLE_H
#define ADESPRESSOBUFFERHANDLE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ADEspressoBufferHandle : NSObject {
    NSString *_name;
    *void _rawData;
    NSArray *_dimensions;
    NSUInteger _width;
    NSUInteger _height;
    NSUInteger _channels;
    NSUInteger _size;
}


@property (readonly, nonatomic) NSUInteger channels;
@property (readonly, nonatomic) *void data;
@property (readonly, nonatomic) NSArray *dimensions;
@property (readonly, nonatomic) NSUInteger dimensionsProduct;
@property (readonly, nonatomic) NSUInteger height;
@property (readonly, nonatomic) NSUInteger width;


-(BOOL)copyTo:(id)arg0 ;
-(BOOL)writeToFile:(id)arg0 atomically:(BOOL)arg1 ;
-(id)initWithName:(id)arg0 buffer:(struct ? )arg1 ;
-(id)initWithName:(id)arg0 rawData:(*void)arg1 dimensions:(id)arg2 strides:(id)arg3 ;
-(void)clearBuffer;


@end


#endif