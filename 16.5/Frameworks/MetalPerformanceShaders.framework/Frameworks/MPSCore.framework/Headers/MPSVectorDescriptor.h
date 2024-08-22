// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSVECTORDESCRIPTOR_H
#define MPSVECTORDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface MPSVectorDescriptor : NSObject

@property (nonatomic) unsigned int dataType; // ivar: _dataType
@property (nonatomic) NSUInteger length; // ivar: _length
@property (readonly, nonatomic) NSUInteger vectorBytes; // ivar: _vectorBytes
@property (readonly, nonatomic) NSUInteger vectors; // ivar: _vectors


+(NSUInteger)vectorBytesForLength:(NSUInteger)arg0 dataType:(unsigned int)arg1 ;
+(id)vectorDescriptorWithLength:(NSUInteger)arg0 dataType:(unsigned int)arg1 ;
+(id)vectorDescriptorWithLength:(NSUInteger)arg0 vectors:(NSUInteger)arg1 vectorBytes:(NSUInteger)arg2 dataType:(unsigned int)arg3 ;
-(id)init;


@end


#endif