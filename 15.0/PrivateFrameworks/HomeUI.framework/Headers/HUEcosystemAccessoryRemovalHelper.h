// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUECOSYSTEMACCESSORYREMOVALHELPER_H
#define HUECOSYSTEMACCESSORYREMOVALHELPER_H

@class NSSet, HFItem<HFServiceLikeItem>, NSString;

#import <Foundation/Foundation.h>


@interface HUEcosystemAccessoryRemovalHelper : NSObject

@property (retain, nonatomic) NSSet *connectedEcosystemHomes; // ivar: _connectedEcosystemHomes
@property (nonatomic) BOOL hasValidConnectedHomes; // ivar: _hasValidConnectedHomes
@property (weak, nonatomic) HFItem<HFServiceLikeItem> *item; // ivar: _item
@property (retain, nonatomic) NSString *removalActionConfirmationButtonTitle; // ivar: _removalActionConfirmationButtonTitle
@property (retain, nonatomic) NSString *removalActionConfirmationTitle; // ivar: _removalActionConfirmationTitle
@property (retain, nonatomic) NSString *removalActionTitle; // ivar: _removalActionTitle
@property (retain, nonatomic) NSString *resetAllActionConfirmationButtonTitle; // ivar: _resetAllActionConfirmationButtonTitle
@property (retain, nonatomic) NSString *resetAllActionConfirmationTitle; // ivar: _resetAllActionConfirmationTitle
@property (retain, nonatomic) NSString *resetAllActionTitle; // ivar: _resetAllActionTitle
@property (nonatomic) BOOL shouldUseEcosystemRemovalConfirmation; // ivar: _shouldUseEcosystemRemovalConfirmation
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithItem:(id)arg0 ;
-(void)_parseItemForSuitability;
-(void)ecosystemAccessoryGenerateRemovalConfirmationForAccessoryName:(id)arg0 ;


@end


#endif