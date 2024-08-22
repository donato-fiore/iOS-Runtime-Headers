// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSMMUTABLESEARCHSTATE_H
#define SGSMMUTABLESEARCHSTATE_H

@class SGMContactOpportunityInSpotlight, SGMContactResultInSpotlight, SGMContactResultSelectedInSpotlight, SGMNoResultSelectedInSpotlight, SGMOtherResultSelectedInSpotlight, NSMutableSet;

#import <Foundation/Foundation.h>


@interface SGSMMutableSearchState : NSObject {
    SGMContactOpportunityInSpotlight *_contactOpportunity;
    SGMContactResultInSpotlight *_contactResult;
    SGMContactResultSelectedInSpotlight *_contactSelected;
    SGMNoResultSelectedInSpotlight *_noneSelected;
    SGMOtherResultSelectedInSpotlight *_otherSelected;
    unsigned short _contactResultCount;
    unsigned short _contactOpportunityCount;
    unsigned char _contactConversionCount;
    unsigned char _contactLossCount;
    unsigned short _curatedOrPseudoContactOpportunityCount;
    unsigned char _otherSelectedCount;
    unsigned char _nonOpportunityCount;
    BOOL _justEngaged;
    NSMutableSet *_resultsSeen;
}




-(BOOL)isFirstTimeSeeingResult:(id)arg0 ;
-(BOOL)justEngaged;
-(id)description;
-(id)init;
-(void)commit;
-(void)resetConversionCounts;
-(void)resetCounts;
-(void)resetJustEngaged;
-(void)scoreAsContactConversion;
-(void)scoreAsContactLoss;
-(void)scoreAsContactOpportunity;
-(void)scoreAsContactResult;
-(void)scoreAsCuratedOrPseudoContactOpportunity;
-(void)scoreAsNonOpportunity;
-(void)scoreAsOtherConversion;
-(void)setJustEngaged;


@end


#endif