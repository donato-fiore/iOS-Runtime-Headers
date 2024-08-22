// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDUSERDOMAINCONCEPTPROCESSOR_H
#define HDUSERDOMAINCONCEPTPROCESSOR_H


#import <Foundation/Foundation.h>


@interface HDUserDomainConceptProcessor : NSObject



+(BOOL)processUserDomainConceptsAfter:(NSInteger)arg0 transactionLimit:(NSInteger)arg1 outAnchor:(*NSInteger)arg2 outProcessedConceptsCount:(*NSInteger)arg3 transaction:(id)arg4 error:(*id)arg5 ;
-(id)init;


@end


#endif