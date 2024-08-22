// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERAUPGRADEOFFERBANNERITEM_H
#define HUCAMERAUPGRADEOFFERBANNERITEM_H

@class HFItem, NSString, HMHome, NSNumber, ICQOpportunitySheetDetailsSpecification, HFUserItem;
@protocol HFHomeKitItemProtocol, HFHomeKitObject;



@interface HUCameraUpgradeOfferBannerItem : HFItem <HFHomeKitItemProtocol>



@property (readonly, nonatomic) NSString *bannerActionText; // ivar: _bannerActionText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasFetchedOfferResults; // ivar: _hasFetchedOfferResults
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (retain, nonatomic) NSString *offerActionTitle; // ivar: _offerActionTitle
@property (retain, nonatomic) NSString *offerMessage; // ivar: _offerMessage
@property (retain, nonatomic) NSString *offerTitle; // ivar: _offerTitle
@property (retain, nonatomic) NSNumber *planLimit; // ivar: _planLimit
@property (retain, nonatomic) NSString *sheetActionText; // ivar: _sheetActionText
@property (retain, nonatomic) ICQOpportunitySheetDetailsSpecification *sheetDetails; // ivar: _sheetDetails
@property (retain, nonatomic) NSString *sheetMessage; // ivar: _sheetMessage
@property (retain, nonatomic) NSString *sheetTitle; // ivar: _sheetTitle
@property (readonly) Class superclass;
@property (retain, nonatomic) HFUserItem *userItem; // ivar: _userItem


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)hiddenOfferDisplayOutcome;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)offerDisplayOutcome;


@end


#endif