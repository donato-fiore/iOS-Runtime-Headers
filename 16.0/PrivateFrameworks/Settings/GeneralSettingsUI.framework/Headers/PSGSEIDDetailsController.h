// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGSEIDDETAILSCONTROLLER_H
#define PSGSEIDDETAILSCONTROLLER_H

@class PSListController, NSString;
@protocol NFHardwareEventListener;



@interface PSGSEIDDetailsController : PSListController <NFHardwareEventListener>



@property (retain, nonatomic) NSString *SEIDString; // ivar: _SEIDString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int hwState; // ivar: _hwState
@property (readonly) Class superclass;


-(BOOL)_setupSEIDSpecifier;
-(id)SEIDString:(id)arg0 ;
-(id)specifiers;
-(void)_updateHwStateChange;
-(void)dealloc;
-(void)hardwareStateDidChange;
-(void)viewDidLoad;


@end


#endif