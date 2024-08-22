// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDPATHMANIPULATION_H
#define TSDPATHMANIPULATION_H


#import <Foundation/Foundation.h>

#import "TSDPathManipulation.h"

@interface TSDPathManipulation : NSObject {
    TSDPathManipulation *mPrecedingManipulation;
}




-(BOOL)canDecomposeRectIntoParts;
-(id)initWithProperties:(id)arg0 bundle:(id)arg1 dataManager:(*void)arg2 precedingManipulation:(id)arg3 ;
-(struct CGPath *)manipulatePath:(struct CGPath *)arg0 withLineWidth:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif