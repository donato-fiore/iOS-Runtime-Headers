// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCTODAYCONFIGCONVERSIONOPERATION_H
#define FCTODAYCONFIGCONVERSIONOPERATION_H

@class NSError, NSArray, NTPBTodayConfig, NSDictionary;
@protocol FCCoreConfiguration, FCContentContext;


#import "FCOperation.h"

@interface FCTodayConfigConversionOperation : FCOperation

@property (copy, nonatomic) NSObject<FCCoreConfiguration> *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) id *defaultConfigCompletionHandler; // ivar: _defaultConfigCompletionHandler
@property (copy, nonatomic) NSError *defaultConfigError; // ivar: _defaultConfigError
@property (copy, nonatomic) NSArray *networkEvents; // ivar: _networkEvents
@property (copy, nonatomic) NTPBTodayConfig *resultDefaultConfig; // ivar: _resultDefaultConfig
@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType; // ivar: _resultHeldRecordsByType
@property (copy, nonatomic) NTPBTodayConfig *resultSingleTagConfig; // ivar: _resultSingleTagConfig
@property (copy, nonatomic) id *singleTagConfigCompletionHandler; // ivar: _singleTagConfigCompletionHandler
@property (copy, nonatomic) NSError *singleTagConfigError; // ivar: _singleTagConfigError
@property (retain, nonatomic) NSDictionary *widgetConfiguration; // ivar: _widgetConfiguration


-(BOOL)validateOperation;
-(id)_todayConfigWithConfigJSON:(id)arg0 articleListIDs:(id)arg1 articleIDs:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(void)_collectRecordIDsReferencedBySectionConfig:(id)arg0 withArticleListIDs:(id)arg1 articleIDs:(id)arg2 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif