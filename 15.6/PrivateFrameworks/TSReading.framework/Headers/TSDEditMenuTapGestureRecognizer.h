// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDEDITMENUTAPGESTURERECOGNIZER_H
#define TSDEDITMENUTAPGESTURERECOGNIZER_H

@class UITapGestureRecognizer;


#import "TSDRep.h"

@interface TSDEditMenuTapGestureRecognizer : UITapGestureRecognizer {
    TSDRep *mTouchedRep;
}


@property (nonatomic) BOOL ignoreTargetAction; // ivar: mIgnoreTargetAction


-(id)touchedRep;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif