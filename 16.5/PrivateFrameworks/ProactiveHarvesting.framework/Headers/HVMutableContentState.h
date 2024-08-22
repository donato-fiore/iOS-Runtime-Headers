// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HVMUTABLECONTENTSTATE_H
#define HVMUTABLECONTENTSTATE_H



#import "HVContentState.h"

@interface HVMutableContentState : HVContentState



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithConsumers:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(void)setConsumers:(id)arg0 ;
-(void)setLevelOfService:(unsigned char)arg0 ;


@end


#endif