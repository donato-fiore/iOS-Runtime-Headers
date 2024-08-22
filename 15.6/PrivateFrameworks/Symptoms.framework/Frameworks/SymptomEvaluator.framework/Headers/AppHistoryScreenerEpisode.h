// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPHISTORYSCREENEREPISODE_H
#define APPHISTORYSCREENEREPISODE_H

@class NSUUID, NSMutableArray;

#import <Foundation/Foundation.h>

#import "NWPVarBandit.h"

@interface AppHistoryScreenerEpisode : NSObject {
    NWPVarBandit *pvar;
    NSUUID *genID;
    CGFloat baselineCeilingRx;
    CGFloat baselineCeilingTx;
    NSMutableArray *partialRewards;
    NSMutableArray *partialCeilingLifts;
    NSUInteger dataVolume;
    CGFloat energyTaxBracket;
}


@property BOOL screenIn; // ivar: _screenIn


+(CGFloat)_energyTaxBracketFor:(NSUInteger)arg0 ;
+(void)_setCustomBackingStore:(id)arg0 ;
+(void)_setCustomLearningResetAt:(NSUInteger)arg0 ;
-(BOOL)canAcceptEpisodeWithRedactionAndTax;
-(float)computeReward;
-(id)_fetchWithLabel:(id)arg0 exportLabel:(id)arg1 ;
-(id)_getPvar;
-(id)description;
-(id)initWithLabel:(id)arg0 exportLabel:(id)arg1 ;
-(void)accrueReward:(float)arg0 ;
-(void)accrueRewardFromFlow:(id)arg0 ;
-(void)dealloc;


@end


#endif