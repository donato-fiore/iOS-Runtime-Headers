// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BFFSPINNERCONTROLLER_H
#define BFFSPINNERCONTROLLER_H

@class OBSetupAssistantSpinnerController, NSString;
@protocol BFFFlowItem, BFFFlowItemDelegate;



@interface BFFSpinnerController : OBSetupAssistantSpinnerController <BFFFlowItem>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BFFFlowItemDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)cloudConfigSkipKey;
-(BOOL)isEphemeral;
-(BOOL)shouldAllowStartOver;
-(BOOL)shouldSuppressExtendedInitializationActivityIndicator;


@end


#endif