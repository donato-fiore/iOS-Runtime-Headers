// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUSIMPLESERIALIZER_H
#define VMUSIMPLESERIALIZER_H



#import "VMUAbstractSerializer.h"

@interface VMUSimpleSerializer : VMUAbstractSerializer {
    *void _map;
    unsigned int _internCursor;
}




-(id)copyContiguousData;
-(id)init;
-(unsigned int)serializeNullTerminatedBytes:(char *)arg0 ;
-(unsigned int)serializeString:(id)arg0 ;
-(void)_serializeValues:(*unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)dealloc;
-(void)serialize32:(unsigned int)arg0 ;
-(void)serialize64:(NSUInteger)arg0 ;


@end


#endif