// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHMATCHINGOPTIONS_H
#define PGGRAPHMATCHINGOPTIONS_H

@class NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface PGGraphMatchingOptions : NSObject

@property (retain, nonatomic) NSSet *focusedNodes; // ivar: _focusedNodes
@property (nonatomic) BOOL needsKeywords; // ivar: _needsKeywords
@property (nonatomic) NSUInteger relatedType; // ivar: _relatedType
@property (retain, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (nonatomic) unsigned short targetEventDomain; // ivar: _targetEventDomain


+(id)optionsWithRelatedType:(NSUInteger)arg0 ;
+(unsigned short)defaultTargetEventDomain;
-(id)init;


@end


#endif