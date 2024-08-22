// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNSORTSBYPOSITIONINAUXILIARYARRAY_H
#define _CNSORTSBYPOSITIONINAUXILIARYARRAY_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface _CNSortsByPositionInAuxiliaryArray : NSObject

@property (readonly, copy, nonatomic) NSArray *auxiliaryValues; // ivar: _auxiliaryValues
@property (readonly, copy, nonatomic) NSDictionary *ranks; // ivar: _ranks
@property (readonly, copy, nonatomic) id *transform; // ivar: _transform


+(id)comparatorForSortingAccordingToAuxiliaryValues:(SEL)arg0 transform:(id)arg1 ;
-(id)comparator:(SEL)arg0 ;
-(id)initWithAuxiliaryValues:(id)arg0 transform:(id)arg1 ;
-(id)rankForObject:(id)arg0 ;
-(void)prepareRankingIndex;


@end


#endif