// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEVARIABLENUMBER_H
#define DEVARIABLENUMBER_H



#import "DEVariable.h"

@interface DEVariableNumber : DEVariable



-(CGFloat)getValue;
-(id)init;
-(id)initWithName:(id)arg0 value:(CGFloat)arg1 ;
-(id)initWithSharedPtr:(*void)arg0 ;
-(void)setValue:(CGFloat)arg0 ;


@end


#endif