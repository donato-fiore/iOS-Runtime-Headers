// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMAPISEARCHGROUPREQUEST_H
#define NMAPISEARCHGROUPREQUEST_H



#import "NMAPIURLRequest.h"

@interface NMAPISearchGroupRequest : NMAPIURLRequest

@property (nonatomic) NSUInteger resultsPerSection; // ivar: _resultsPerSection


-(Class)responseParserClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)urlComponentsWithStoreURLBag:(id)arg0 error:(*id)arg1 ;


@end


#endif