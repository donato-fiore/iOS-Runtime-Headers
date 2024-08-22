// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFMETADATAIMAGECAPTUREMOVIEPROPERTIES_H
#define PFMETADATAIMAGECAPTUREMOVIEPROPERTIES_H

@class NSDictionary;


#import "PFMetadataCore.h"

@interface PFMetadataImageCaptureMovieProperties : PFMetadataCore {
    NSDictionary *_iccMovieProperties;
}




-(BOOL)configureWithMetadataPlist:(id)arg0 ;
-(BOOL)isSloMo;
-(BOOL)isTimelapse;
-(id)_makeGPSProperties;
-(id)durationTimeInterval;
-(id)initWithImageCaptureMovieProperties:(id)arg0 contentType:(id)arg1 timeZoneLookup:(id)arg2 ;
-(id)livePhotoPairingIdentifier;
-(id)originalFilenamee;
-(id)plistForEncoding;


@end


#endif