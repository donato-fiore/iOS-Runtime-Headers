// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPENCILKITTEXTFINDINGRESULT_H
#define ICPENCILKITTEXTFINDINGRESULT_H

@class PKSearchQueryItem;


#import "ICTextFindingResult.h"

@interface ICPencilKitTextFindingResult : ICTextFindingResult

@property (nonatomic) CGSize drawingSize; // ivar: _drawingSize
@property (nonatomic) NSUInteger order; // ivar: _order
@property (retain, nonatomic) PKSearchQueryItem *searchQueryItem; // ivar: _searchQueryItem


-(CGFloat)cornerRadius;
-(NSInteger)compare:(id)arg0 ;
-(id)framesForHighlightInTextView:(id)arg0 ;


@end


#endif