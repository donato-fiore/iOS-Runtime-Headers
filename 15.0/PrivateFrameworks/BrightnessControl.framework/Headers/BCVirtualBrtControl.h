// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCVIRTUALBRTCONTROL_H
#define BCVIRTUALBRTCONTROL_H



#import "BCBrtControl.h"

@interface BCVirtualBrtControl : BCBrtControl {
    CGFloat _nits;
}




// +(id)newMonitorWithHandler:(id)arg0 error:(unk)arg1  ;
+(void)failToCreateDisplaysFor:(CGFloat)arg0 ;
-(BOOL)setNits:(CGFloat)arg0 error:(*id)arg1 ;
-(CGFloat)getNitsWithError:(*id)arg0 ;
-(id)init;


@end


#endif