// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSMOCKURLREQUESTCOMPARATOR_H
#define AMSMOCKURLREQUESTCOMPARATOR_H

@class NSString;
@protocol AMSURLRequestComparator;

#import <Foundation/Foundation.h>


@interface AMSMockURLRequestComparator : NSObject <AMSURLRequestComparator>



@property (copy, nonatomic) id *criteriaBlock; // ivar: _criteriaBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldOverrideURLRequest:(id)arg0 ;
-(id)initWithCriteriaBlock:(id)arg0 ;


@end


#endif