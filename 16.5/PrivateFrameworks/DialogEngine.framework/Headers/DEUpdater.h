// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEUPDATER_H
#define DEUPDATER_H


#import <Foundation/Foundation.h>


@interface DEUpdater : NSObject



+(BOOL)putManifest:(id)arg0 src:(id)arg1 contents:(id)arg2 summary:(id)arg3 overrides:(id)arg4 ;
+(BOOL)putManifest:(id)arg0 src:(id)arg1 contents:(id)arg2 summary:(id)arg3 overrides:(id)arg4 dirDownloadType:(NSUInteger)arg5 ;
+(id)summarize:(id)arg0 filter:(id)arg1 ;


@end


#endif