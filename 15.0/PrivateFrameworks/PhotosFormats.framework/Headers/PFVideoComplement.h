// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFVIDEOCOMPLEMENT_H
#define PFVIDEOCOMPLEMENT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface PFVideoComplement : NSObject {
    NSDictionary *_metadata;
    NSString *_originalPairingIdentifier;
    ? _originalImageDisplayTime;
    ? _originalVideoDuration;
    BOOL _didReadOriginalMetadata;
}


@property (readonly, nonatomic) ? imageDisplayTime;
@property (readonly, copy, nonatomic) NSString *imagePath;
@property (readonly, copy, nonatomic) NSString *imagePath; // ivar: _imagePath
@property (readonly, nonatomic) ? originalImageDisplayTime;
@property (readonly, copy, nonatomic) NSString *originalPairingIdentifier;
@property (readonly, nonatomic) ? originalVideoDuration;
@property (readonly, copy, nonatomic) NSString *pairingIdentifier;
@property (readonly, copy, nonatomic) NSString *videoPath;
@property (readonly, copy, nonatomic) NSString *videoPath; // ivar: _videoPath


+(id)currentFormatVersion;
-(BOOL)linkOrCopyPath:(id)arg0 toPath:(id)arg1 forceCopy:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)writeToBundleAtURL:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithBundleAtURL:(id)arg0 ;
-(id)initWithPathToVideo:(id)arg0 pathToImage:(id)arg1 ;
-(id)initWithPathToVideo:(id)arg0 pathToImage:(id)arg1 imageDisplayTime:(struct ? )arg2 pairingIdentifier:(id)arg3 ;
-(id)initWithPropertyList:(id)arg0 ;
-(id)propertyListRepresentation;
-(int)numberOfFramesRecoveredWithError:(*id)arg0 ;
-(void)_readMetadataIfNeeded;


@end


#endif