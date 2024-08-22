// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFREADERTEXTSIZESTEPPERCONTROLLER_H
#define SFREADERTEXTSIZESTEPPERCONTROLLER_H

@class NSString;
@protocol _SFSettingsAlertStepperController, SFReaderContext;

#import <Foundation/Foundation.h>


@interface SFReaderTextSizeStepperController : NSObject <_SFSettingsAlertStepperController>

 {
    id<SFReaderContext> *_readerContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithReaderContext:(id)arg0 ;
-(void)_updateStepperControls:(id)arg0 ;
-(void)decrementValue:(id)arg0 ;
-(void)incrementValue:(id)arg0 ;
-(void)prepareStepper:(id)arg0 ;


@end


#endif