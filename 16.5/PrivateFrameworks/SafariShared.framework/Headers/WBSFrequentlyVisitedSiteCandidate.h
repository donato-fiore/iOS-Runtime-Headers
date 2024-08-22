// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSFREQUENTLYVISITEDSITECANDIDATE_H
#define WBSFREQUENTLYVISITEDSITECANDIDATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSFrequentlyVisitedSiteCandidate : NSObject

@property (readonly, nonatomic) float score; // ivar: _score
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *urlString; // ivar: _urlString


-(id)initWithURLString:(id)arg0 title:(id)arg1 score:(float)arg2 ;


@end


#endif