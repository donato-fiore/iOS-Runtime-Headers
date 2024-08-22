// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSHIDEVENTREDIRECTATTRIBUTES_H
#define BKSHIDEVENTREDIRECTATTRIBUTES_H



#import "BKSHIDEventBaseAttributes.h"

@interface BKSHIDEventRedirectAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) int pid; // ivar: _pid


+(id)protobufSchema;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;


@end


#endif