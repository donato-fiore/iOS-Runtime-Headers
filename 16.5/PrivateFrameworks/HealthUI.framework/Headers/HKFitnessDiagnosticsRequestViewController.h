// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFITNESSDIAGNOSTICSREQUESTVIEWCONTROLLER_H
#define HKFITNESSDIAGNOSTICSREQUESTVIEWCONTROLLER_H

@class OBTextWelcomeController;



@interface HKFitnessDiagnosticsRequestViewController : OBTextWelcomeController

@property (copy, nonatomic) id *completion; // ivar: _completion


+(BOOL)needsRequestedPermission;
+(void)presentInViewController:(id)arg0 completion:(id)arg1 ;
-(BOOL)shouldInlineButtonTray;
-(void)_disableDataCollection;
-(void)_enableDataCollection;
-(void)_showDataCollectionAdditionalInfo;
-(void)viewDidLoad;


@end


#endif