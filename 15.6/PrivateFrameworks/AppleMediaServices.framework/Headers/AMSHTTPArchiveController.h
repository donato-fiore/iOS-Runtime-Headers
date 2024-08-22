// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSHTTPARCHIVECONTROLLER_H
#define AMSHTTPARCHIVECONTROLLER_H


#import <Foundation/Foundation.h>


@interface AMSHTTPArchiveController : NSObject



+(BOOL)_disabled;
+(BOOL)_shouldAddRequest:(id)arg0 ;
+(BOOL)isRemoveDisabled;
+(id)_harURLFilters;
+(id)harURLFilters;
+(id)maxBufferSizeOverride;
+(void)_updateHarFileFilters;
+(void)addHTTPArchive:(id)arg0 ;
+(void)initialize;
+(void)setMaxBufferSizeOverride:(id)arg0 ;
+(void)setRemoveDisabled:(BOOL)arg0 ;


@end


#endif