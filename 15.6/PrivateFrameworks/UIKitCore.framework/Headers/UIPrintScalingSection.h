// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTSCALINGSECTION_H
#define UIPRINTSCALINGSECTION_H



#import "UIPrintOptionSection.h"
#import "UIPrintScaleDownOnlyOption.h"
#import "UIPrintScaleToFitOption.h"

@interface UIPrintScalingSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrintScaleDownOnlyOption *scaleDownOnlyPrintOption; // ivar: _scaleDownOnlyPrintOption
@property (retain, nonatomic) UIPrintScaleToFitOption *scaleToFitPrintOption; // ivar: _scaleToFitPrintOption


-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(void)dealloc;
-(void)scaleToFitChanged;
-(void)updatePrintOptionsList;


@end


#endif