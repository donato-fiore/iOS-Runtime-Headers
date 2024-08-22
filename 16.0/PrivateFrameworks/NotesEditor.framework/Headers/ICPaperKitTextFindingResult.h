// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICPAPERKITTEXTFINDINGRESULT_H
#define ICPAPERKITTEXTFINDINGRESULT_H



#import "ICTextFindingResult.h"

@interface ICPaperKitTextFindingResult : ICTextFindingResult

@property (nonatomic) NSUInteger order; // ivar: _order
@property (nonatomic) CGRect searchResultRect; // ivar: _searchResultRect


-(CGFloat)cornerRadius;
-(NSInteger)compare:(id)arg0 ;
-(id)framesForHighlightInTextView:(id)arg0 ;


@end


#endif