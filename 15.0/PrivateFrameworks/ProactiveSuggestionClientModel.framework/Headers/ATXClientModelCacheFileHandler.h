// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXCLIENTMODELCACHEFILEHANDLER_H
#define ATXCLIENTMODELCACHEFILEHANDLER_H

@class NSString;
@protocol ATXClientModelCacheFileHandlerProtocol;

#import <Foundation/Foundation.h>


@interface ATXClientModelCacheFileHandler : NSObject <ATXClientModelCacheFileHandlerProtocol>

 {
    NSString *_cacheFileBasePath;
    NSString *_clientModelId;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientModelIdFromFileName:(id)arg0 ;
+(id)deserializeData:(id)arg0 ;
+(id)readSuggestionsFromCacheFromReadOnlyFileHandle:(id)arg0 ;
+(id)unarchiveCacheFileFromReadOnlyFileHandle:(id)arg0 ;
-(BOOL)createCacheFileForClientModelCacheUpdate:(id)arg0 ;
-(BOOL)deleteCachedSuggestionsFile;
-(BOOL)writeSerializedDataToCacheFile:(id)arg0 ;
-(id)cacheFilePath;
-(id)initWithCacheFileBasePath:(id)arg0 clientModelId:(id)arg1 ;
-(id)readOnlyFileHandleForSuggestionsCache;
-(id)readSuggestionsFromCache;
-(id)serializeSuggestionsData:(id)arg0 ;


@end


#endif