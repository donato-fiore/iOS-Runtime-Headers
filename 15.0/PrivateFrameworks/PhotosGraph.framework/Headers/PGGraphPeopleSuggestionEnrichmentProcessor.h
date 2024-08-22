// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHPEOPLESUGGESTIONENRICHMENTPROCESSOR_H
#define PGGRAPHPEOPLESUGGESTIONENRICHMENTPROCESSOR_H

@class NSString;
@protocol PGGraphDataModelEnrichmentProcessor;

#import <Foundation/Foundation.h>


@interface PGGraphPeopleSuggestionEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsBackgroundJob;
+(CGFloat)backgroundJobTimeout;
+(id)backgroundJobName;
-(void)_performPeopleSuggestionForHomeWithManager:(id)arg0 progressBlock:(id)arg1 ;
-(void)_performPeopleSuggestionLearningWithManager:(id)arg0 progressBlock:(id)arg1 ;
-(void)enrichDataModelWithManager:(id)arg0 curationContext:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(id)arg3 ;


@end


#endif