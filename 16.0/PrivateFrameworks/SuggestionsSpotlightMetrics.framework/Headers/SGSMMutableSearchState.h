// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGSMMUTABLESEARCHSTATE_H
#define SGSMMUTABLESEARCHSTATE_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface SGSMMutableSearchState : NSObject {
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