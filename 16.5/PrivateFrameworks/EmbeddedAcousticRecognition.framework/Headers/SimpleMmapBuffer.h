// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIMPLEMMAPBUFFER_H
#define SIMPLEMMAPBUFFER_H


#import <Foundation/Foundation.h>


@interface SimpleMmapBuffer : NSObject

@property *void dataPointer; // ivar: _dataPointer
@property NSUInteger size; // ivar: _size


-(id)initWithData:(*void)arg0 ofSize:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif