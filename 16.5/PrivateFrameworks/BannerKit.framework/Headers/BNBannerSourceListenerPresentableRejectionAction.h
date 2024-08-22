// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNBANNERSOURCELISTENERPRESENTABLEREJECTIONACTION_H
#define BNBANNERSOURCELISTENERPRESENTABLEREJECTIONACTION_H

@class BSAction, NSString;



@interface BNBannerSourceListenerPresentableRejectionAction : BSAction

@property (readonly, copy, nonatomic) NSString *rejectionReason;


-(BOOL)_expectsResponse;
-(id)initWithReason:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif