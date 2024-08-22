// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TXRMIPMAPLEVEL_H
#define TXRMIPMAPLEVEL_H

@class NSMutableArray, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TXRMipmapLevel : NSObject <NSCopying>

 {
    NSMutableArray *_elements;
    NSUInteger _level;
}


@property (readonly) NSArray *elements;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initAsLevel:(NSUInteger)arg0 arrayLength:(NSUInteger)arg1 cubemap:(BOOL)arg2 dataSourceProvider:(id)arg3 ;
-(id)initAsLevel:(NSUInteger)arg0 dimensions:(NSUInteger)arg1 pixelFormat:(NSUInteger)arg2 alphaInfo:(NSUInteger)arg3 arrayLength:(BOOL)arg4 cubemap:(id)arg5 bufferAllocator;
-(void)setImage:(id)arg0 atElement:(NSUInteger)arg1 atFace:(NSUInteger)arg2 ;


@end


#endif