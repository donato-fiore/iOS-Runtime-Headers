// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKPLAYERACTIVITYRELATIONSHIPACHIEVEMENT_H
#define GKPLAYERACTIVITYRELATIONSHIPACHIEVEMENT_H

@class NSString, NSDate;


#import "GKPlayerActivityRelationshipBase.h"

@interface GKPlayerActivityRelationshipAchievement : GKPlayerActivityRelationshipBase

@property (retain, nonatomic) NSString *achDescription; // ivar: _achDescription
@property (nonatomic) NSInteger progress; // ivar: _progress
@property (retain, nonatomic) NSDate *timeStamp; // ivar: _timeStamp


+(id)secureCodedPropertyKeys;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif