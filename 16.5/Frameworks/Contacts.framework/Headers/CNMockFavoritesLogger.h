// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMOCKFAVORITESLOGGER_H
#define CNMOCKFAVORITESLOGGER_H

@class NSString;
@protocol CNFavoritesLogger;

#import <Foundation/Foundation.h>


@interface CNMockFavoritesLogger : NSObject <CNFavoritesLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


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