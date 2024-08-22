// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCTOPICALNODE_H
#define FCTOPICALNODE_H

@class NSSet, NSCountedSet, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "FCTopicalNode.h"

@interface FCTopicalNode : NSObject <NSCopying>

 {
    CGFloat _score;
    BOOL _scored;
    NSSet *_identifiers;
    NSSet *_displayedElements;
    NSCountedSet *_topicCollections;
    FCTopicalNode *_parent;
    NSSet *_children;
    CGFloat _scoreMultiplier;
    CGFloat _relatedness;
    CGFloat _specificity;
    CGFloat _parentRawScore;
    CGFloat _relatednessThreshold;
    CGFloat _relatednessKWeight;
    CGFloat _topicScoreWeight;
    CGFloat _highestScoringRelativeScoreMultiplier;
    NSString *_storedNodeIdentifier;
}


@property (retain) NSString *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif