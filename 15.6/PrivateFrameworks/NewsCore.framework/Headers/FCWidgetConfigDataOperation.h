// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCWIDGETCONFIGDATAOPERATION_H
#define FCWIDGETCONFIGDATAOPERATION_H

@class NSArray, NSDictionary;
@protocol FCContentContext;


#import "FCOperation.h"
#import "FCHeldRecords.h"

@interface FCWidgetConfigDataOperation : FCOperation

@property (retain, nonatomic) FCHeldRecords *cachedRecords; // ivar: _cachedRecords
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (retain, nonatomic) NSArray *recordSources; // ivar: _recordSources
@property (retain, nonatomic) NSDictionary *recordSourcesByRecordType; // ivar: _recordSourcesByRecordType
@property (retain, nonatomic) NSArray *resultArticleIDs; // ivar: _resultArticleIDs
@property (retain, nonatomic) NSArray *resultArticleListIDs; // ivar: _resultArticleListIDs
@property (retain, nonatomic) NSDictionary *resultDefaultConfigurationDictionary; // ivar: _resultDefaultConfigurationDictionary
@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType; // ivar: _resultHeldRecordsByType
@property (retain, nonatomic) NSDictionary *resultSingleTagConfigurationDictionary; // ivar: _resultSingleTagConfigurationDictionary
@property (copy, nonatomic) id *widgetConfigDataCompletionHandler; // ivar: _widgetConfigDataCompletionHandler
@property (copy, nonatomic) NSDictionary *widgetConfiguration; // ivar: _widgetConfiguration


-(BOOL)validateOperation;
-(id)_recordSourceForRecordType:(id)arg0 ;
-(void)_collectRecordsFromWidgetConfigDictionary:(id)arg0 ;
-(void)_finalizeResultFromCachedRecords;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;


@end


#endif