// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTWIDGETCONFIGDATAOPERATION_H
#define NTWIDGETCONFIGDATAOPERATION_H

@class FCOperation, FCHeldRecords, NSArray, NSDictionary;
@protocol FCContentContext;



@interface NTWidgetConfigDataOperation : FCOperation

@property (retain, nonatomic) FCHeldRecords *cachedRecords; // ivar: _cachedRecords
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (retain, nonatomic) NSArray *resultArticleIDs; // ivar: _resultArticleIDs
@property (retain, nonatomic) NSArray *resultArticleListIDs; // ivar: _resultArticleListIDs
@property (retain, nonatomic) NSDictionary *resultDefaultConfigurationDictionary; // ivar: _resultDefaultConfigurationDictionary
@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType; // ivar: _resultHeldRecordsByType
@property (retain, nonatomic) NSDictionary *resultSingleTagConfigurationDictionary; // ivar: _resultSingleTagConfigurationDictionary
@property (copy, nonatomic) id *widgetConfigDataCompletionHandler; // ivar: _widgetConfigDataCompletionHandler
@property (copy, nonatomic) NSDictionary *widgetConfiguration; // ivar: _widgetConfiguration


-(BOOL)validateOperation;
-(void)_collectRecordsFromWidgetConfigDictionary:(id)arg0 ;
-(void)_finalizeResultFromCachedRecords;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif