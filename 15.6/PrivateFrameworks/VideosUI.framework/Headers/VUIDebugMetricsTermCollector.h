// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIDEBUGMETRICSTERMCOLLECTOR_H
#define VUIDEBUGMETRICSTERMCOLLECTOR_H

@class NSArray, NSString, NSDictionary;
@protocol VUIDebugMetricsTermCollector;

#import <Foundation/Foundation.h>


@interface VUIDebugMetricsTermCollector : NSObject <VUIDebugMetricsTermCollector>



@property (readonly, nonatomic) NSArray *baseTerms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *filteredTerms;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *metricsKitTerms;
@property (readonly, nonatomic) NSDictionary *primaryTerms;
@property (readonly) Class superclass;


-(id)accountTerms;
-(id)clickTerms;
-(id)dialogTerms;
-(id)enterTerms;
-(id)exitTerms;
-(id)impressionsTerms;
-(id)pageRenderTerms;
-(id)pageTerms;
-(id)searchTerms;


@end


#endif