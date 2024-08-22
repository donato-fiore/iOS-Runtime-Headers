// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUISRADARUTILITIES_H
#define SUISRADARUTILITIES_H


#import <Foundation/Foundation.h>


@interface SUISRadarUtilities : NSObject



+(id)pathToSpotlightFiles;
+(id)rankingDiagnosticsFilePath;
+(id)resultSectionsFilePath;
+(void)fileRadarWithCommand:(id)arg0 ;
+(void)logRankingDiagnosticsWithSections:(id)arg0 ;
+(void)logResultSectionsWithSections:(id)arg0 rankingManager:(id)arg1 ;


@end


#endif