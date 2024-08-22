// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMUTABLECHAMOISOVERLAPPINGMODEL_H
#define SBMUTABLECHAMOISOVERLAPPINGMODEL_H



#import "SBChamoisOverlappingModel.h"

@interface SBMutableChamoisOverlappingModel : SBChamoisOverlappingModel

@property (nonatomic) CGRect boundingBox;
@property (nonatomic) CGRect containerBounds;


-(void)addItem:(id)arg0 withCenter:(struct CGPoint )arg1 size:(struct CGSize )arg2 ;
-(void)setCenter:(struct CGPoint )arg0 forItem:(id)arg1 ;
-(void)setFullyOccluded:(BOOL)arg0 forItem:(id)arg1 ;
-(void)setPartiallyOccluded:(BOOL)arg0 forItem:(id)arg1 ;
-(void)setSize:(struct CGSize )arg0 forItem:(id)arg1 ;
-(void)setUserConfiguredSizeBeforeOverlapping:(struct CGSize )arg0 forItem:(id)arg1 ;


@end


#endif