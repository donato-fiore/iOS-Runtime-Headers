// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUBUFFERTILEADAPTER_H
#define NUBUFFERTILEADAPTER_H

@class NSString;
@protocol NUBufferTile, NUBuffer;

#import <Foundation/Foundation.h>


@interface NUBufferTileAdapter : NSObject <NUBufferTile>



@property (readonly, nonatomic) NSObject<NUBuffer> *buffer; // ivar: _buffer
@property (readonly, nonatomic) ? contentRect; // ivar: _contentRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? frameRect; // ivar: _frameRect
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithFrameRect:(struct ? )arg0 contentRect:(struct ? )arg1 buffer:(id)arg2 ;


@end


#endif