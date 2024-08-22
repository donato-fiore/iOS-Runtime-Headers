// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSTILLIMAGEPERSISTENCERESPONSE_H
#define CAMSTILLIMAGEPERSISTENCERESPONSE_H

@class NSString, NSDate, NSURL, NSDictionary, UIImage;
@protocol CAMTransientAssetConvertible;


#import "CAMPersistenceResponse.h"

@interface CAMStillImagePersistenceResponse : CAMPersistenceResponse <CAMTransientAssetConvertible>



@property (readonly, copy, nonatomic) NSString *burstIdentifier; // ivar: _burstIdentifier
@property (readonly, nonatomic) NSUInteger burstRepresentedCount; // ivar: _burstRepresentedCount
@property (readonly, nonatomic) NSDate *captureDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? duration;
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo; // ivar: _expectingPairedVideo
@property (readonly, nonatomic) CGSize finalExpectedPixelSize;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ? irisStillDisplayTime;
@property (readonly, nonatomic) NSString *irisStillImageUUID;
@property (readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSUInteger mediaType;
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSUInteger numberOfRepresentedAssets;
@property (readonly, copy, nonatomic) NSURL *persistenceURL;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) unsigned short sessionIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransientAssetTemporaryPlaceholder) BOOL transientAssetTemporaryPlaceholder;
@property (readonly, nonatomic) NSString *uuid;


-(id)initWithUUID:(id)arg0 captureSession:(unsigned short)arg1 url:(id)arg2 creationDate:(id)arg3 scrubberImage:(id)arg4 finalExpectedPixelSize:(struct CGSize )arg5 metadata:(id)arg6 burstIdentifier:(id)arg7 burstRepresentedCount:(NSUInteger)arg8 expectingPairedVideo:(BOOL)arg9 coordinationInfo:(id)arg10 ;


@end


#endif