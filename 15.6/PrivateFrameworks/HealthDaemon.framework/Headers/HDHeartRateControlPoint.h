// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEARTRATECONTROLPOINT_H
#define HDHEARTRATECONTROLPOINT_H



#import "HDHealthServiceCharacteristic.h"

@interface HDHeartRateControlPoint : HDHealthServiceCharacteristic

@property (nonatomic) unsigned char operation; // ivar: _operation


+(id)uuid;
-(id)description;
-(id)getBinaryValueWithError:(*id)arg0 ;
-(id)initWithOperation:(unsigned char)arg0 ;


@end


#endif