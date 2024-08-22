// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTEXTINPUTDEBUGTARGETSVIEW_H
#define PKTEXTINPUTDEBUGTARGETSVIEW_H

@class UIView, NSArray;



@interface PKTextInputDebugTargetsView : UIView {
    CGFloat _dashLinePhase;
}


@property (copy, nonatomic) NSArray *visualizationElements; // ivar: _visualizationElements


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif