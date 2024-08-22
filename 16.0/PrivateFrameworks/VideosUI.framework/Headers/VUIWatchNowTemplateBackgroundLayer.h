// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIWATCHNOWTEMPLATEBACKGROUNDLAYER_H
#define VUIWATCHNOWTEMPLATEBACKGROUNDLAYER_H

@class CAGradientLayer;



@interface VUIWatchNowTemplateBackgroundLayer : CAGradientLayer

@property (nonatomic) NSInteger uiStyle; // ivar: _uiStyle


-(id)initWithRect:(struct CGRect )arg0 withStyle:(NSInteger)arg1 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)updateStyle:(NSInteger)arg0 ;


@end


#endif