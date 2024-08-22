// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMOMENTCAPTUREMOVIERECORDINGRESOLVEDSETTINGS_H
#define AVMOMENTCAPTUREMOVIERECORDINGRESOLVEDSETTINGS_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface AVMomentCaptureMovieRecordingResolvedSettings : NSObject

@property (readonly) ? movieDimensions; // ivar: _movieDimensions
@property (readonly) NSURL *movieURL; // ivar: _movieURL
@property (readonly) NSURL *spatialOverCaptureURL; // ivar: _spatialOverCaptureURL
@property (readonly, getter=isTorchEnabled) BOOL torchEnabled; // ivar: _torchEnabled
@property (readonly) NSInteger uniqueID; // ivar: _uniqueID


+(id)movieRecordingResolvedSettingsWithUniqueID:(NSInteger)arg0 torchEnabled:(BOOL)arg1 movieURL:(id)arg2 spatialOverCaptureURL:(id)arg3 movieDimensions:(struct ? )arg4 ;
-(id)_initWithUniqueID:(NSInteger)arg0 torchEnabled:(BOOL)arg1 movieURL:(id)arg2 spatialOverCaptureURL:(id)arg3 movieDimensions:(struct ? )arg4 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;


@end


#endif