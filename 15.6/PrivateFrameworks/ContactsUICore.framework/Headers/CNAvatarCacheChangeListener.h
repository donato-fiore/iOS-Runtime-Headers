// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAVATARCACHECHANGELISTENER_H
#define CNAVATARCACHECHANGELISTENER_H

@class NSData, NSNotificationCenter, CNContactStore;
@protocol CNAvatarCacheChangeListenerDelegate, CNScheduler;

#import <Foundation/Foundation.h>


@interface CNAvatarCacheChangeListener : NSObject

@property (copy) NSData *currentHistoryToken; // ivar: _currentHistoryToken
@property (readonly, weak, nonatomic) NSObject<CNAvatarCacheChangeListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) NSObject<CNScheduler> *preprocessor; // ivar: _preprocessor
@property (readonly, nonatomic) NSObject<CNScheduler> *rawPreprocessor; // ivar: _rawPreprocessor
@property (readonly, nonatomic) CNContactStore *store; // ivar: _store


-(id)description;
-(id)init;
-(id)initWithContactStore:(id)arg0 delegate:(id)arg1 ;
-(id)makeAnalysisTask;
-(id)makeDatabaseChangedTask;
-(id)makeReportingTaskWithIdentifiers:(id)arg0 ;
-(void)databaseChanged:(id)arg0 ;
-(void)loadCurrentHistoryToken;
-(void)start;
-(void)stop;


@end


#endif