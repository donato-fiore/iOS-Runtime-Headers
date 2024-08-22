// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSFREQUENTLYVISITEDSITECANDIDATE_H
#define WBSFREQUENTLYVISITEDSITECANDIDATE_H


#import <Foundation/Foundation.h>

#import "WBSHistoryItem.h"

@interface WBSFrequentlyVisitedSiteCandidate : NSObject

@property (readonly, nonatomic) WBSHistoryItem *historyItem; // ivar: _historyItem
@property (readonly, nonatomic) float score; // ivar: _score


+(id)titleForHistoryItem:(id)arg0 ;
-(id)initWithHistoryItem:(id)arg0 score:(float)arg1 ;


@end


#endif