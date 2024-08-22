// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUV2BRIDGEBUSARRAY_H
#define AUV2BRIDGEBUSARRAY_H



#import "AUAudioUnitBusArray.h"

@interface AUV2BridgeBusArray : AUAudioUnitBusArray



-(BOOL)isCountChangeable;
-(BOOL)setBusCount:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithOwner:(id)arg0 scope:(unsigned int)arg1 ;


@end


#endif