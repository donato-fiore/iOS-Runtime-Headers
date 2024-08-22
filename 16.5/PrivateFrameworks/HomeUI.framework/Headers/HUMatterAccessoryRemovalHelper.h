// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMATTERACCESSORYREMOVALHELPER_H
#define HUMATTERACCESSORYREMOVALHELPER_H

@class NSArray, HFItem<HFServiceLikeItem>, NSString;

#import <Foundation/Foundation.h>


@interface HUMatterAccessoryRemovalHelper : NSObject

@property (retain, nonatomic) NSArray *connectedEcosystems; // ivar: _connectedEcosystems
@property (weak, nonatomic) HFItem<HFServiceLikeItem> *item; // ivar: _item
@property (retain, nonatomic) NSString *removalActionConfirmationButtonTitle; // ivar: _removalActionConfirmationButtonTitle
@property (retain, nonatomic) NSString *removalActionConfirmationTitle; // ivar: _removalActionConfirmationTitle
@property (retain, nonatomic) NSString *removalActionTitle; // ivar: _removalActionTitle
@property (retain, nonatomic) NSString *resetAllActionConfirmationButtonTitle; // ivar: _resetAllActionConfirmationButtonTitle
@property (retain, nonatomic) NSString *resetAllActionConfirmationTitle; // ivar: _resetAllActionConfirmationTitle
@property (retain, nonatomic) NSString *resetAllActionTitle; // ivar: _resetAllActionTitle
@property (readonly, nonatomic) BOOL shouldUseEcosystemRemovalConfirmation; // ivar: _shouldUseEcosystemRemovalConfirmation
@property (readonly, nonatomic) NSArray *thirdPartyEcosystems; // ivar: _thirdPartyEcosystems
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)updateShouldUseEcosystemRemovalConfirmation;
-(id)initWithItem:(id)arg0 connectedEcosystems:(id)arg1 ;
-(void)matterAccessoryGenerateRemovalConfirmationForAccessoryName:(id)arg0 ;


@end


#endif