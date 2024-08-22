// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHINTERNALTAPTORADARIGNORER_H
#define BLSHINTERNALTAPTORADARIGNORER_H


#import <Foundation/Foundation.h>


@interface BLSHInternalTapToRadarIgnorer : NSObject



+(BOOL)hasIgnoredDesignations;
+(BOOL)shouldIgnoreDesignation:(NSUInteger)arg0 ;
+(id)_defaults;
+(id)_ignoredDesignations;
+(void)ignoreRadarDesignation:(NSUInteger)arg0 ;
+(void)resetIgnoredDesignations;


@end


#endif