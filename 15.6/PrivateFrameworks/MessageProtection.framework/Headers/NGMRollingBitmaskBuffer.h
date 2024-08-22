// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NGMROLLINGBITMASKBUFFER_H
#define NGMROLLINGBITMASKBUFFER_H


#import <Foundation/Foundation.h>


@interface NGMRollingBitmaskBuffer : NSObject

@property unsigned int upper_buffer_index; // ivar: _upper_buffer_index
@property char * valid_values_buffer; // ivar: _valid_values_buffer
@property unsigned int valid_values_buffer_size; // ivar: _valid_values_buffer_size


-(BOOL)processIncomingCounter:(unsigned int)arg0 ;
-(id)bufferData;
-(id)init;
-(id)initWithData:(id)arg0 upperBufferIndex:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif