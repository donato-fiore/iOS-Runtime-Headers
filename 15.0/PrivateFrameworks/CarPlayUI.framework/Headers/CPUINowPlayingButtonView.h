// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPUINOWPLAYINGBUTTONVIEW_H
#define CPUINOWPLAYINGBUTTONVIEW_H

@class UIView, CALayer, CAStateController, NSMutableArray, NSString;
@protocol CAMLParserDelegate;



@interface CPUINowPlayingButtonView : UIView <CAMLParserDelegate>

 {
    CALayer *_animatedGlyphLayer;
    CAStateController *_stateController;
    NSMutableArray *_barLayers;
    CALayer *_platterLayer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (copy, nonatomic) NSString *stateName; // ivar: _stateName
@property (readonly) Class superclass;


+(id)classSubstitions;
-(Class)CAMLParser:(id)arg0 didFailToFindClassWithName:(id)arg1 ;
-(id)initWithCAML:(id)arg0 ;
-(void)_handleGlyphLayerDidLoad:(id)arg0 ;
-(void)_updateColors;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif