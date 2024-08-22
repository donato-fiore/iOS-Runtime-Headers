// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC20FMPRECISIONFINDINGUI13FMPFARSCNVIEW_H
#define _TTC20FMPRECISIONFINDINGUI13FMPFARSCNVIEW_H

@class ARSCNView, NSString;



@interface _TtC20FMPrecisionFindingUI13FMPFARSCNView : ARSCNView {
    ? innerIsolationQueue;
    ? internalIsolationQueue;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL drawsCameraImage;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 options:(id)arg1 ;
-(void)_drawAtTime:(CGFloat)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif