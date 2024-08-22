// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DDATABUFFER_H
#define TSCH3DDATABUFFER_H


#import <Foundation/Foundation.h>


@interface TSCH3DDataBuffer : NSObject

@property (readonly, nonatomic) NSUInteger byteSize;
@property (readonly, nonatomic) NSUInteger componentByteSize;
@property (readonly, nonatomic) NSUInteger elementByteSize;
@property (readonly, nonatomic) BOOL hasLevels;
@property (readonly, nonatomic) tvec3<int> size;
@property (readonly, nonatomic) tvec2<int> size2;


-(id)description;
-(struct DataBufferInfo )bufferInfo;
-(struct DataBufferLevelData )dataAtLevel:(NSUInteger)arg0 ;
-(struct DataBufferLevelData )dataWithSizeGreaterOrEqualTo:(NSUInteger)arg0 ;


@end


#endif