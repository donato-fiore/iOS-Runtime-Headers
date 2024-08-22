// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKBACKGROUNDASSETCONSENTVIEWCONTROLLER_H
#define SKBACKGROUNDASSETCONSENTVIEWCONTROLLER_H

@class OBWelcomeController;



@interface SKBackgroundAssetConsentViewController : OBWelcomeController

@property (copy, nonatomic) id *responseBlock; // ivar: _responseBlock


-(BOOL)isModalInPresentation;
-(NSInteger)modalPresentationStyle;
-(id)init;
-(void)_continueButtonPressed;
-(void)dealloc;
-(void)viewDidLoad;


@end


#endif