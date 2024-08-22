// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGTITLEGENERATORDATEMATCHING_H
#define PGTITLEGENERATORDATEMATCHING_H

@class NSString, NSSet, NSDateInterval;

#import <Foundation/Foundation.h>

#import "PGTitleGenerationContext.h"
#import "PGGraph.h"
#import "PGTitle.h"

@interface PGTitleGeneratorDateMatching : NSObject {
    PGTitleGenerationContext *_titleGenerationContext;
    NSString *_holidayName;
}


@property (readonly, nonatomic) NSUInteger allowedTimeTitleFormats;
@property (retain, nonatomic) NSSet *dateNodes; // ivar: _dateNodes
@property (retain, nonatomic) PGGraph *graph; // ivar: _graph
@property (readonly, nonatomic) BOOL isForHighlight; // ivar: _isForHighlight
@property (readonly, nonatomic) NSUInteger lineBreakBehavior; // ivar: _lineBreakBehavior
@property (readonly, nonatomic) NSSet *momentNodes; // ivar: _momentNodes
@property (readonly, nonatomic) NSDateInterval *referenceDateInterval; // ivar: _referenceDateInterval
@property (readonly, nonatomic) PGTitle *title;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)type:(NSInteger)arg0 isBetterThanType:(NSInteger)arg1 ;
-(BOOL)_dateNodeIntersectsWithReferenceDateIntervalByIgnoringYear;
-(NSInteger)_findBestType;
-(NSInteger)_matchingTypeForDateNode:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 referenceDateInterval:(id)arg1 highlightNode:(id)arg2 titleGenerationContext:(id)arg3 ;
-(id)initWithType:(NSInteger)arg0 referenceDateInterval:(id)arg1 momentNodes:(id)arg2 lineBreakBehavior:(NSUInteger)arg3 isForHighlight:(BOOL)arg4 titleGenerationContext:(id)arg5 ;
-(id)initWithType:(NSInteger)arg0 referenceDateInterval:(id)arg1 momentNodes:(id)arg2 titleGenerationContext:(id)arg3 ;


@end


#endif