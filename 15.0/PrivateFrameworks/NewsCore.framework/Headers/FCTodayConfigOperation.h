// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCTODAYCONFIGOPERATION_H
#define FCTODAYCONFIGOPERATION_H

@class NSError, NSArray, NTPBTodayConfig, NSDictionary, NSString;
@protocol FCCoreConfiguration, FCContentContext;


#import "FCOperation.h"

@interface FCTodayConfigOperation : FCOperation

@property (copy) NSObject<FCCoreConfiguration> *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) id *defaultConfigCompletionHandler; // ivar: _defaultConfigCompletionHandler
@property (copy, nonatomic) NSError *defaultConfigError; // ivar: _defaultConfigError
@property (copy, nonatomic) NSArray *networkEvents; // ivar: _networkEvents
@property (copy, nonatomic) NTPBTodayConfig *resultDefaultConfig; // ivar: _resultDefaultConfig
@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType; // ivar: _resultHeldRecordsByType
@property (copy, nonatomic) NTPBTodayConfig *resultSingleTagConfig; // ivar: _resultSingleTagConfig
@property (copy, nonatomic) id *singleTagConfigCompletionHandler; // ivar: _singleTagConfigCompletionHandler
@property (copy, nonatomic) NSError *singleTagConfigError; // ivar: _singleTagConfigError
@property (copy, nonatomic) NSString *widgetConfigID; // ivar: _widgetConfigID


-(BOOL)validateOperation;
-(id)_todayConfigWithConfigJSON:(id)arg0 articleListIDs:(id)arg1 articleIDs:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(void)_collectRecordIDsReferencedBySectionConfig:(id)arg0 withArticleListIDs:(id)arg1 articleIDs:(id)arg2 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif