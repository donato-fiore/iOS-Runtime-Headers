// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNFAVORITESLOGGER_H
#define _CNFAVORITESLOGGER_H

@class NSString;
@protocol CNFavoritesLogger, OS_os_log;

#import <Foundation/Foundation.h>


@interface _CNFavoritesLogger : NSObject <CNFavoritesLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSObject<OS_os_log> *summaryLog; // ivar: _summaryLog
@property (readonly) Class superclass;


-(id)init;
-(void)_simulateCrashReportWithMessage:(id)arg0 ;
-(void)failedToConvertFavoritesToPropertyList:(id)arg0 ;
-(void)failedToReadFavoritesFromPath:(id)arg0 error:(id)arg1 simulateCrashReport:(BOOL)arg2 ;
-(void)failedToReadRemoteFavorites:(id)arg0 ;
-(void)failedToVerifyFavorites:(id)arg0 withPropertyListFavorites:(id)arg1 error:(id)arg2 ;
-(void)failedToVerifyWrittenFavoritesExistsAtPath:(id)arg0 ;
-(void)failedToWriteFavoritesToPath:(id)arg0 error:(id)arg1 simulateCrashReport:(BOOL)arg2 ;
-(void)failedToWriteRemoteFavorites:(id)arg0 ;
-(void)finishedReadingFavoritesFromPath:(id)arg0 entriesCount:(NSUInteger)arg1 ;
-(void)finishedReadingRemoteFavorites;
-(void)finishedWritingFavoritesToPath:(id)arg0 entriesCount:(NSUInteger)arg1 ;
-(void)finishedWritingRemoteFavorites;
-(void)readingFavorites:(id)arg0 ;
-(void)rematchingFavorites:(id)arg0 ;
-(void)reportFavoritesAccessedBeforeFirstUnlock;
-(void)writingFavorites:(id)arg0 ;


@end


#endif