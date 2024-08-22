// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSCALARGRAPHVIEWCONTROLLER_H
#define HKSCALARGRAPHVIEWCONTROLLER_H



#import "HKGraphViewController.h"

@interface HKScalarGraphViewController : HKGraphViewController

@property (readonly, nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight


-(id)_buildGraphViewWithLabelDimension:(id)arg0 labelEndings:(NSInteger)arg1 numericAxisConfigurationOverrides:(id)arg2 ;
-(id)initWithMinimumHeight:(CGFloat)arg0 ;
-(id)initWithMinimumHeight:(CGFloat)arg0 labelDimension:(id)arg1 labelEndings:(NSInteger)arg2 numericAxisConfigurationOverrides:(id)arg3 ;
-(void)_pinView:(id)arg0 toParentView:(id)arg1 ;
-(void)_setupGraphViewSelectionStyle;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif