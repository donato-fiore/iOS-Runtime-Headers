// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFVIDEOCOMPLEMENTMETADATARECORD_H
#define PFVIDEOCOMPLEMENTMETADATARECORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PFVideoComplementMetadataRecord : NSObject

@property (readonly) BOOL hasValidImageDisplayTime;
@property (readonly) BOOL hasValidPairingIdentifier;
@property (readonly) BOOL hasValidVideoDuration;
@property ? imageDisplayTime; // ivar: _imageDisplayTime
@property (copy) NSString *pairingIdentifier; // ivar: _pairingIdentifier
@property ? videoDuration; // ivar: _videoDuration




@end


#endif