// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRANSPARENCYLOGCLIENT_H
#define TRANSPARENCYLOGCLIENT_H


#import <Foundation/Foundation.h>

#import "TransparencyManagedDataStore.h"
#import "TransparencyLogSession.h"
#import "TransparencyAnalytics.h"

@interface TransparencyLogClient : NSObject

@property (retain) TransparencyManagedDataStore *dataStore; // ivar: _dataStore
@property (retain) TransparencyLogSession *session; // ivar: _session
@property (retain) TransparencyAnalytics *transparencyAnalytics; // ivar: _transparencyAnalytics


-(BOOL)fetch:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)fetch:(id)arg0 shouldRetry:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)needsRetry:(id)arg0 ;
-(id)initWithBackgroundSession:(id)arg0 transparencyAnalytics:(id)arg1 dataStore:(id)arg2 ;
-(void)deleteDownloadId:(id)arg0 ;
-(void)download:(id)arg0 retry:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)downloadRequest:(id)arg0 retry:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)fetchRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)renewAccountTokenForFetch:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif