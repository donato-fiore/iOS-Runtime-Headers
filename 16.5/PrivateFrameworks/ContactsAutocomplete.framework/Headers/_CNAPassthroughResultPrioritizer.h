// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNAPASSTHROUGHRESULTPRIORITIZER_H
#define _CNAPASSTHROUGHRESULTPRIORITIZER_H

@class NSString;
@protocol CNAutocompleteSuggestedResultPrioritization;

#import <Foundation/Foundation.h>


@interface _CNAPassthroughResultPrioritizer : NSObject <CNAutocompleteSuggestedResultPrioritization>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)applyPriorityOrderToResults:(id)arg0 fetchRequest:(id)arg1 andCompletePriorityResultsPromise:(id)arg2 ;


@end


#endif