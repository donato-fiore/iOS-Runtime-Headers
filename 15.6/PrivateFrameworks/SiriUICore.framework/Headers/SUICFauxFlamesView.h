// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUICFAUXFLAMESVIEW_H
#define SUICFAUXFLAMESVIEW_H

@class UIView;



@interface SUICFauxFlamesView : UIView {
    NSInteger _style;
    ? _sequenceAttributes;
}




+(id)_frameImagesForSequence:(struct ? )arg0 ;
-(BOOL)isAnimating;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 screenSize:(NSInteger)arg1 ;
-(void)_cleanupView;
-(void)didMoveToSuperview;
-(void)prewarm;
-(void)setHidden:(BOOL)arg0 ;
-(void)start:(BOOL)arg0 ;
-(void)stop:(BOOL)arg0 ;


@end


#endif