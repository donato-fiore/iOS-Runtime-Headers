// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMAPISEARCHREQUEST_H
#define NMAPISEARCHREQUEST_H

@class NSString;


#import "NMAPIRequest.h"

@interface NMAPISearchRequest : NMAPIRequest

@property (nonatomic) NSUInteger resultsPerSection; // ivar: _resultsPerSection
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString


-(Class)responseParserClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSearchString:(id)arg0 ;
-(id)urlComponentsWithStoreBagDictionary:(id)arg0 error:(*id)arg1 ;


@end


#endif