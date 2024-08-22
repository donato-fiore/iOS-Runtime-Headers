// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMTAPTORADARUTILITIES_H
#define CAMTAPTORADARUTILITIES_H


#import <Foundation/Foundation.h>


@interface CAMTapToRadarUtilities : NSObject



+(id)writeDictionary:(id)arg0 toPlistFileWithName:(id)arg1 ;
+(void)fileRadarWithTitle:(id)arg0 description:(id)arg1 classification:(id)arg2 reproducibility:(id)arg3 componentID:(id)arg4 componentName:(id)arg5 componentVersion:(id)arg6 keywordIdsString:(id)arg7 attachmentURLs:(id)arg8 includeSysDiagnose:(BOOL)arg9 includePhotosDiagnose:(BOOL)arg10 ;


@end


#endif