// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFIMAPDOWNLOADCACHE_H
#define MFIMAPDOWNLOADCACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MFIMAPDownloadCache : NSObject {
    NSMutableArray *_downloads;
}




-(id)downloadForMessage:(id)arg0 ;
-(id)downloadForUid:(unsigned int)arg0 section:(id)arg1 expectedLength:(NSUInteger)arg2 consumer:(id)arg3 ;
-(id)downloadForUid:(unsigned int)arg0 section:(id)arg1 length:(NSUInteger)arg2 consumer:(id)arg3 ;
-(id)downloadForUid:(unsigned int)arg0 section:(id)arg1 range:(struct _NSRange )arg2 consumer:(id)arg3 ;
-(void)addCommandsForDownload:(id)arg0 toPipeline:(id)arg1 ;
-(void)cleanUpDownloadsForUid:(unsigned int)arg0 ;
-(void)dealloc;
-(void)handleFetchResponse:(id)arg0 forUid:(unsigned int)arg1 ;
-(void)handleFetchResponses:(id)arg0 ;
-(void)processResultsForUid:(unsigned int)arg0 ;


@end


#endif