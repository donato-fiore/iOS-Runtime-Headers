// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUSIMPLEDESERIALIZER_H
#define VMUSIMPLEDESERIALIZER_H

@class NSData;


#import "VMUAbstractSerializer.h"

@interface VMUSimpleDeserializer : VMUAbstractSerializer {
    *void _cache;
    NSData *_data;
}




-(*unsigned int)_deserializeValues:(unsigned int)arg0 error:(*id)arg1 ;
-(NSUInteger)deserialize64WithError:(*id)arg0 ;
-(char *)copyDeserializedNullTerminatedBytesWithError:(*id)arg0 ;
-(id)copyDeserializedStringWithError:(*id)arg0 ;
-(id)copyDeserializedStringWithID:(unsigned int)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 ;
-(unsigned int)deserialize32WithError:(*id)arg0 ;
-(void)dealloc;
-(void)skipFields:(unsigned int)arg0 ;


@end


#endif