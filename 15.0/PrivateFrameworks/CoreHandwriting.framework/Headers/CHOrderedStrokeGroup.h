// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHORDEREDSTROKEGROUP_H
#define CHORDEREDSTROKEGROUP_H

@class NSArray;


#import "CHStrokeGroup.h"

@interface CHOrderedStrokeGroup : CHStrokeGroup

@property (readonly, retain, nonatomic) NSArray *orderedStrokeIdentifiers; // ivar: _orderedStrokeIdentifiers


-(id)initWithAncestorIdentifier:(NSInteger)arg0 strokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect )arg4 classification:(NSInteger)arg5 groupingConfidence:(CGFloat)arg6 strategyIdentifier:(id)arg7 firstStrokeOrigin:(struct CGPoint )arg8 orderedStrokeIdentifiers:(id)arg9 ;
-(id)initWithUniqueIdentifier:(NSInteger)arg0 ancestorIdentifier:(NSInteger)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect )arg5 classification:(NSInteger)arg6 groupingConfidence:(CGFloat)arg7 strategyIdentifier:(id)arg8 firstStrokeOrigin:(struct CGPoint )arg9 orderedStrokeIdentifiers:(id)arg10 ;
-(void)dealloc;


@end


#endif