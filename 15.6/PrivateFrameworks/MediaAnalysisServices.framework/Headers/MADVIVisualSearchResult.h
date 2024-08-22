// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MADVIVISUALSEARCHRESULT_H
#define MADVIVISUALSEARCHRESULT_H

@class NSArray;


#import "MADResult.h"

@interface MADVIVisualSearchResult : MADResult

@property (readonly, nonatomic) NSArray *resultItems; // ivar: _resultItems


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResultItems:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif