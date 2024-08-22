// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGQUICKRESPONSESRECORDS_H
#define SGQUICKRESPONSESRECORDS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesRecords : NSObject

@property (readonly, nonatomic) NSArray *replyRecords; // ivar: _replyRecords
@property (readonly, nonatomic) CGFloat totalDisplayed; // ivar: _totalDisplayed
@property (readonly, nonatomic) CGFloat totalMatched; // ivar: _totalMatched
@property (readonly, nonatomic) CGFloat totalOpportunities; // ivar: _totalOpportunities
@property (readonly, nonatomic) CGFloat totalSelected; // ivar: _totalSelected
@property (readonly, nonatomic) CGFloat totalUnmatched; // ivar: _totalUnmatched


-(id)initWithReplyRecords:(id)arg0 totalOpportunities:(CGFloat)arg1 totalDisplayed:(CGFloat)arg2 totalSelected:(CGFloat)arg3 totalMatched:(CGFloat)arg4 totalUnmatched:(CGFloat)arg5 ;


@end


#endif