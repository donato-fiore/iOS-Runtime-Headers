// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCDEVICECURSOR_H
#define GCDEVICECURSOR_H



#import "GCControllerDirectionPad.h"

@interface GCDeviceCursor : GCControllerDirectionPad {
    CGRect _frame;
}




-(id)initWithDigital:(BOOL)arg0 descriptionName:(id)arg1 ;
-(struct CGRect )frame;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif