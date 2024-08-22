// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ODDFILLCOLORLIST_H
#define ODDFILLCOLORLIST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ODDFillColorList : NSObject {
    NSArray *mColors;
    int mHueDirection;
    int mMethod;
}




-(id)colorAtIndex:(NSUInteger)arg0 count:(NSUInteger)arg1 state:(id)arg2 ;
-(id)cycleColorAtIndex:(NSUInteger)arg0 ;
-(id)repeatColorAtIndex:(NSUInteger)arg0 ;
-(id)spanColorAtIndex:(NSUInteger)arg0 count:(NSUInteger)arg1 state:(id)arg2 ;
-(void)getComponentsForIndex:(NSUInteger)arg0 hue:(*float)arg1 saturation:(*float)arg2 brightness:(*float)arg3 state:(id)arg4 ;
-(void)setColors:(id)arg0 ;
-(void)setHueDirection:(int)arg0 ;
-(void)setMethod:(int)arg0 ;


@end


#endif