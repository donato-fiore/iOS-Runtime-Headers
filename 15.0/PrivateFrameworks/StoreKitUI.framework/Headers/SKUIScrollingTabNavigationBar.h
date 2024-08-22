// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISCROLLINGTABNAVIGATIONBAR_H
#define SKUISCROLLINGTABNAVIGATIONBAR_H

@class SUNavigationBar, NSString;
@protocol SKUIPositionAdjusting;



@interface SKUIScrollingTabNavigationBar : SUNavigationBar <SKUIPositionAdjusting>

 {
    UIOffset _positionOffset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIOffset positionOffset;
@property (readonly) Class superclass;


-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif