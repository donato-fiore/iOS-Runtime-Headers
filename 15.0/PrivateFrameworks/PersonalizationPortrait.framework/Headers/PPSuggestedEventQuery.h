// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSUGGESTEDEVENTQUERY_H
#define PPSUGGESTEDEVENTQUERY_H

@class NSSet;


#import "PPEventQuery.h"

@interface PPSuggestedEventQuery : PPEventQuery

@property (retain, nonatomic) NSSet *matchingCategories; // ivar: _matchingCategories


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif