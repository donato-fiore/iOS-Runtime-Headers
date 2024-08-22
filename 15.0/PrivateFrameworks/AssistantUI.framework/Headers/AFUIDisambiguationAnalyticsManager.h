// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFUIDISAMBIGUATIONANALYTICSMANAGER_H
#define AFUIDISAMBIGUATIONANALYTICSMANAGER_H

@class NSArray;
@protocol AFUIDisambiguationAnalyticsManagerDataSource, AFDisambiguationAssistance;

#import <Foundation/Foundation.h>


@interface AFUIDisambiguationAnalyticsManager : NSObject

@property (weak, nonatomic) NSObject<AFUIDisambiguationAnalyticsManagerDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSObject<AFDisambiguationAssistance> *disambiguationAssistance; // ivar: _disambiguationAssistance
@property (retain, nonatomic) NSArray *listItems; // ivar: _listItems


+(id)sharedManager;
-(id)_allListItems;
-(id)_listItemMatchingAceId:(id)arg0 ;
-(void)_logDisambiguationSelectedEventWithListItem:(id)arg0 ;
-(void)_recordSASMetrics:(id)arg0 withSelectedBundleId:(id)arg1 originalCommandId:(id)arg2 ;
-(void)logDisambiguationDismissedEvent;
-(void)logDisambiguationItemSelected:(id)arg0 ;


@end


#endif