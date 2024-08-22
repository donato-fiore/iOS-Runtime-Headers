// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXINSPECTIONSERVERACTIONPREDICTIONSCORELOGGER_H
#define _ATXINSPECTIONSERVERACTIONPREDICTIONSCORELOGGER_H

@class ATXInspectionServerPredictionScoreLogger, NSMutableDictionary;



@interface _ATXInspectionServerActionPredictionScoreLogger : ATXInspectionServerPredictionScoreLogger {
    NSMutableDictionary *_actionMetaDataItems;
}




-(id)actionMetaDataItems;
-(id)init;
-(void)storeMetaDataFromActionContainerForKey:(id)arg0 actionContainer:(id)arg1 ;


@end


#endif