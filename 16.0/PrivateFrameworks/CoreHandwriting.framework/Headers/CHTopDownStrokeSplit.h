// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHTOPDOWNSTROKESPLIT_H
#define CHTOPDOWNSTROKESPLIT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CHTopDownStrokeSplit : NSObject

@property (readonly, nonatomic) CGRect groupBounds1; // ivar: _groupBounds1
@property (readonly, nonatomic) CGRect groupBounds2; // ivar: _groupBounds2
@property (readonly, nonatomic) NSArray *orderedStrokes; // ivar: _orderedStrokes
@property (readonly, nonatomic) NSArray *orderedStrokesGroup1; // ivar: _orderedStrokesGroup1
@property (readonly, nonatomic) NSArray *orderedStrokesGroup2; // ivar: _orderedStrokesGroup2
@property (readonly, nonatomic) NSArray *strokeGroup1; // ivar: _strokeGroup1
@property (readonly, nonatomic) NSArray *strokeGroup2; // ivar: _strokeGroup2
@property (readonly, nonatomic) NSInteger substrokeCount1; // ivar: _substrokeCount1
@property (readonly, nonatomic) NSInteger substrokeCount2; // ivar: _substrokeCount2
@property (readonly, nonatomic) CGFloat transitionTime; // ivar: _transitionTime


+(id)writingDirectionOrderedStrokes:(id)arg0 substrokesByStrokeIdentifier:(id)arg1 ;
-(NSInteger)_substrokeCountForStrokes:(id)arg0 substrokesByStrokeIdentifier:(id)arg1 ;
-(id)initWithStrokes:(id)arg0 substrokesByStrokeIdentifier:(id)arg1 splitIndex:(NSInteger)arg2 ;


@end


#endif