// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICQUPGRADEFLOWSPECIFICATION_H
#define _ICQUPGRADEFLOWSPECIFICATION_H

@class ICQFlowSpecification, NSDictionary;



@interface _ICQUpgradeFlowSpecification : ICQFlowSpecification {
    NSDictionary *_serverDict;
}


@property (nonatomic) BOOL needsWiFi; // ivar: _needsWiFi
@property (nonatomic) NSInteger offerType; // ivar: _offerType
@property (readonly, nonatomic) NSDictionary *serverDict;


+(id)_upgradePageIdentifierForError:(id)arg0 ;
+(id)sanitizedUpgradeFlowServerDict:(id)arg0 ;
+(id)upgradeFlowSpecificationSampleForLevel:(NSInteger)arg0 ;
-(id)initWithServerDictionary:(id)arg0 ;
-(id)upgradeFailurePage;
-(id)upgradeFailurePageForNetwork;
-(id)upgradePageForError:(id)arg0 ;
-(id)upgradePageForSuccess:(BOOL)arg0 ;
-(id)upgradeSuccessPage;
-(id)upgradeSuccessPageForWiFi;


@end


#endif