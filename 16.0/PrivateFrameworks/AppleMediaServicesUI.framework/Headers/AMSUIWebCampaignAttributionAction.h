// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBCAMPAIGNATTRIBUTIONACTION_H
#define AMSUIWEBCAMPAIGNATTRIBUTIONACTION_H

@class NSURL, ACAccount, NSArray;


#import "AMSUIWebAction.h"

@interface AMSUIWebCampaignAttributionAction : AMSUIWebAction

@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSArray *additionalQueryItems; // ivar: _additionalQueryItems


+(id)_campaignAttributionTaskForURL:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif