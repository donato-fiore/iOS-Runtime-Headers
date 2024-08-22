// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSWORDBREACHHELPER_H
#define WBSPASSWORDBREACHHELPER_H

@protocol WBSPasswordBreachHelperProtocol;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachHelper : NSObject <WBSPasswordBreachHelperProtocol>





-(void)addResultRecordDictionaries:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearAllRecordsWithCompletionHandler:(id)arg0 ;
-(void)clearRecentlyBreachedResultRecordsWithCompletionHandler:(id)arg0 ;
-(void)getResultRecordDictionariesForResultQueryDictionaries:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)recentlyBreachedResultRecordDictionariesWithCompletionHandler:(id)arg0 ;
-(void)runLookupSessionIgnoringMinimumDelay:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif