// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSHTTPARCHIVECONTROLLER_H
#define AMSHTTPARCHIVECONTROLLER_H


#import <Foundation/Foundation.h>


@interface AMSHTTPArchiveController : NSObject



+(BOOL)_disabled;
+(BOOL)_shouldAddRequest:(id)arg0 ;
+(BOOL)isRemoveDisabled;
+(id)_harURLFilters;
+(id)_previouslyWrittenHTTPArchives;
+(id)buffer;
+(id)harURLFilters;
+(id)maxBufferSizeOverride;
+(void)_combineAndWriteHTTPArchivesToDiskCompressed:(BOOL)arg0 ;
+(void)_periodicCleanup;
+(void)_updateHarFileFilters;
+(void)_updateMaxBufferSize;
+(void)addHTTPArchive:(id)arg0 ;
+(void)ams_addHTTPArchive:(id)arg0 ;
+(void)ams_writeHTTPArchivesToDiskCompressed:(BOOL)arg0 ;
+(void)initialize;
+(void)setMaxBufferSizeOverride:(id)arg0 ;
+(void)setRemoveDisabled:(BOOL)arg0 ;


@end


#endif