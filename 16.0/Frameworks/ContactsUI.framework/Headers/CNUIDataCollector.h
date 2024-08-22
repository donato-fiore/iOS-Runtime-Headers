// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIDATACOLLECTOR_H
#define CNUIDATACOLLECTOR_H

@class NSString, CNMetricsUIReporter;

#import <Foundation/Foundation.h>

#import "CNUIDataCollectorSGLogger.h"

@interface CNUIDataCollector : NSObject

@property (readonly, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (readonly, nonatomic) CNMetricsUIReporter *metricsReporter; // ivar: _metricsReporter
@property (readonly, nonatomic) CNUIDataCollectorSGLogger *sgLogger; // ivar: _sgLogger


+(BOOL)isEnabled;
+(id)sharedCollector;
-(id)init;
-(id)initWithEnvironment:(id)arg0 ;
-(void)logContactActionType:(id)arg0 attributes:(id)arg1 ;
-(void)logContactCreated:(id)arg0 originalContact:(id)arg1 ;
-(void)logContactShown:(id)arg0 ;
-(void)logPresentation;
-(void)logSearchResultSelected:(id)arg0 ;
-(void)logSearchResultsFetchedSuggested:(BOOL)arg0 ;
-(void)logSearchUsage;


@end


#endif