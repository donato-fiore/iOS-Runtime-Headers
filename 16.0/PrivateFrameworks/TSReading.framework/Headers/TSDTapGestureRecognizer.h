// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDTAPGESTURERECOGNIZER_H
#define TSDTAPGESTURERECOGNIZER_H

@class UITapGestureRecognizer;



@interface TSDTapGestureRecognizer : UITapGestureRecognizer {
    BOOL mSavedFirstTapLocation;
}


@property (readonly, nonatomic) CGPoint firstTapLocation; // ivar: mFirstTapLocation
@property (readonly, nonatomic) NSUInteger tapCount; // ivar: mTapCount


-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif