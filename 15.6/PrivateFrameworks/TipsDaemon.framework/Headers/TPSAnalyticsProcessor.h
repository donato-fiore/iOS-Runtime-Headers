// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSANALYTICSPROCESSOR_H
#define TPSANALYTICSPROCESSOR_H

@class TPSAnalyticsEventController, TPSDuetDataProvider, NSString, NSDate;
@protocol TPSAnalyticsProcessing, TPSAnalyticsProcessorDataSource;

#import <Foundation/Foundation.h>


@interface TPSAnalyticsProcessor : NSObject <TPSAnalyticsProcessing>

 {
    TPSAnalyticsEventController *_analyticsEventController;
    TPSDuetDataProvider *_duetDataProvider;
    NSString *_dateLastRunKey;
}


@property (weak, nonatomic) NSObject<TPSAnalyticsProcessorDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSDate *dateLastRun;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TPSDuetDataProvider *duetDataProvider;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)loadValueForKey:(id)arg0 class:(Class)arg1 ;
+(void)saveValue:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(void)processAnalytics:(id)arg0 ;
-(void)resetAnalytics;


@end


#endif