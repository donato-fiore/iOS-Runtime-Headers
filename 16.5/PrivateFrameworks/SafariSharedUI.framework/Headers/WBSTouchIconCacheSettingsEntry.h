// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSTOUCHICONCACHESETTINGSENTRY_H
#define WBSTOUCHICONCACHESETTINGSENTRY_H

@class NSString, NSDate;
@protocol WBSSiteMetadataImageCacheSettingsEntry;

#import <Foundation/Foundation.h>


@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry>



@property (readonly, copy, nonatomic) NSString *UUIDString; // ivar: _UUIDString
@property (readonly, nonatomic) NSInteger databaseID; // ivar: _databaseID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger downloadStatusFlags;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL higherPriorityIconDownloadFailedDueToNetworkError; // ivar: _higherPriorityIconDownloadFailedDueToNetworkError
@property (readonly, copy, nonatomic) NSString *host; // ivar: _host
@property (readonly, nonatomic, getter=isIconInCache) BOOL iconInCache; // ivar: _iconInCache
@property (readonly, nonatomic) NSDate *lastRequestDate; // ivar: _lastRequestDate
@property (readonly, nonatomic) BOOL lastRequestWasInUserLoadedWebpage; // ivar: _lastRequestWasInUserLoadedWebpage
@property (readonly, nonatomic) NSInteger lastResponseStatusCode; // ivar: _lastResponseStatusCode
@property (readonly, nonatomic) NSInteger requestCount; // ivar: _requestCount
@property (readonly, nonatomic) BOOL requestDidSucceed; // ivar: _requestDidSucceed
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger transparencyAnalysisResult; // ivar: _transparencyAnalysisResult


+(id)entryWithHost:(id)arg0 lastRequestDate:(id)arg1 lastRequestWasInUserLoadedWebpage:(BOOL)arg2 requestCount:(NSInteger)arg3 iconInCache:(BOOL)arg4 requestDidSucceed:(BOOL)arg5 lastResponseStatusCode:(NSInteger)arg6 transparencyAnalysisResult:(NSInteger)arg7 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg8 UUIDString:(id)arg9 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)entryByAddingRequestInUserLoadedWebPage:(BOOL)arg0 isIconInCache:(BOOL)arg1 requestDidSucceed:(BOOL)arg2 lastResponseStatusCode:(NSInteger)arg3 transparencyAnalysisResult:(NSInteger)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 UUIDString:(id)arg6 ;
-(id)entryWithDatabaseID:(NSInteger)arg0 ;
-(id)entryWithTransparencyAnalysisResult:(NSInteger)arg0 ;
-(id)init;
-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 lastRequestDate:(id)arg1 lastRequestWasInUserLoadedWebpage:(BOOL)arg2 requestCount:(NSInteger)arg3 iconInCache:(BOOL)arg4 requestDidSucceed:(BOOL)arg5 lastResponseStatusCode:(NSInteger)arg6 transparencyAnalysisResult:(NSInteger)arg7 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg8 UUIDString:(id)arg9 ;
-(id)initWithSQLiteRow:(id)arg0 ;


@end


#endif