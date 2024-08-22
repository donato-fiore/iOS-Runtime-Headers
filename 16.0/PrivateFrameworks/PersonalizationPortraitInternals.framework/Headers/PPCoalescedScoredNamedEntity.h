// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPCOALESCEDSCOREDNAMEDENTITY_H
#define PPCOALESCEDSCOREDNAMEDENTITY_H

@class PPScoredItem;

#import <Foundation/Foundation.h>


@interface PPCoalescedScoredNamedEntity : NSObject

@property (readonly, nonatomic) unsigned short occurrencesInSource; // ivar: _occurrencesInSource
@property (readonly, nonatomic) PPScoredItem *scoredNamedEntity; // ivar: _scoredNamedEntity


-(id)init;
-(id)initWithScoredNamedEntity:(id)arg0 occurrencesInSource:(unsigned short)arg1 ;


@end


#endif