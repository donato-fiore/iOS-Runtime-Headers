// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSTEMPERATUREWARNINGVIEWCONTROLLER_H
#define CSTEMPERATUREWARNINGVIEWCONTROLLER_H

@class NSString;
@protocol CSModalViewDelegate, CSThermalStatusProviding;


#import "CSModalViewControllerBase.h"

@interface CSTemperatureWarningViewController : CSModalViewControllerBase <CSModalViewDelegate>

 {
    id<CSThermalStatusProviding> *_thermalStatusProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)presentationPriority;
-(id)initWithThermalStatusProvider:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)handleSecondaryActionForView:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif