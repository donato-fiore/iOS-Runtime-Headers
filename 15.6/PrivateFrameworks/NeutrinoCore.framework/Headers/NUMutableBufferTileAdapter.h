// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUMUTABLEBUFFERTILEADAPTER_H
#define NUMUTABLEBUFFERTILEADAPTER_H

@class NSString;
@protocol NUMutableBufferTile, NUBuffer, NUMutableBuffer;

#import <Foundation/Foundation.h>


@interface NUMutableBufferTileAdapter : NSObject <NUMutableBufferTile>



@property (readonly, nonatomic) NSObject<NUBuffer> *buffer;
@property (readonly, nonatomic) ? contentRect; // ivar: _contentRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? frameRect; // ivar: _frameRect
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NUMutableBuffer> *mutableBuffer; // ivar: _buffer
@property (readonly) Class superclass;


-(id)init;
-(id)initWithFrameRect:(struct ? )arg0 contentRect:(struct ? )arg1 buffer:(id)arg2 ;


@end


#endif