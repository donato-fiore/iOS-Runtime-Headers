// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKGPXEXPORTER_H
#define HKGPXEXPORTER_H

@class NSFileHandle, NSISO8601DateFormatter, NSURL;

#import <Foundation/Foundation.h>

#import "HKWorkoutRoute.h"

@interface HKGPXExporter : NSObject {
    HKWorkoutRoute *_route;
    NSFileHandle *_fileHandle;
    NSISO8601DateFormatter *_isoFormatter;
}


@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) BOOL isFinished; // ivar: _isFinished


+(id)_displayNameForRoute:(id)arg0 ;
+(id)fileNameForRoute:(id)arg0 ;
-(BOOL)_appendGPXHeaderWithError:(*id)arg0 ;
-(BOOL)_appendString:(id)arg0 error:(*id)arg1 ;
-(BOOL)appendLocations:(id)arg0 error:(*id)arg1 ;
-(BOOL)finishWithError:(*id)arg0 ;
-(id)_trackpointEntryForLocation:(id)arg0 ;
-(id)initWithURL:(id)arg0 route:(id)arg1 ;


@end


#endif