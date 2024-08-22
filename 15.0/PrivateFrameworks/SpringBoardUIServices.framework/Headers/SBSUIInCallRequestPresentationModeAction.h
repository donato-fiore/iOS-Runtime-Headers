// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSUIINCALLREQUESTPRESENTATIONMODEACTION_H
#define SBSUIINCALLREQUESTPRESENTATIONMODEACTION_H

@class BSAction, NSString;



@interface SBSUIInCallRequestPresentationModeAction : BSAction

@property (readonly, copy, nonatomic) NSString *analyticsSource;
@property (readonly, nonatomic) NSInteger requestedPresentationMode;
@property (readonly, nonatomic, getter=isUserInitiated) BOOL userInitiated;


-(id)initWithRequestedPresentationMode:(NSInteger)arg0 isUserInitiated:(BOOL)arg1 analyticsSource:(id)arg2 responseHandler:(id)arg3 ;
-(void)sendCompletionResponseWithSuccess:(BOOL)arg0 ;


@end


#endif