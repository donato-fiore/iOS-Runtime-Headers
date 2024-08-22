// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMVIDEOPERSISTENCERESPONSE_H
#define CAMVIDEOPERSISTENCERESPONSE_H

@class NSString, NSDate, NSURL, UIImage, NSDictionary;
@protocol CAMTransientAssetConvertible;


#import "CAMPersistenceResponse.h"

@interface CAMVideoPersistenceResponse : CAMPersistenceResponse <CAMTransientAssetConvertible>



@property (readonly, copy, nonatomic) NSString *burstIdentifier;
@property (readonly, nonatomic) NSDate *captureDate;
@property (readonly, nonatomic) NSInteger captureMode; // ivar: _captureMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? duration; // ivar: _duration
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo;
@property (readonly, nonatomic) CGSize finalExpectedPixelSize;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ? irisStillDisplayTime;
@property (readonly, nonatomic) NSString *irisStillImageUUID;
@property (readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSUInteger mediaType;
@property (readonly, nonatomic) NSUInteger numberOfRepresentedAssets;
@property (readonly, copy, nonatomic) NSURL *persistenceURL;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) unsigned short sessionIdentifier;
@property (readonly, nonatomic) ? stillDisplayTime; // ivar: _stillDisplayTime
@property (readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property (readonly, copy, nonatomic) NSString *stillPersistenceUUID; // ivar: _stillPersistenceUUID
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransientAssetTemporaryPlaceholder) BOOL transientAssetTemporaryPlaceholder;
@property (readonly, nonatomic) NSString *uuid;


-(id)initWithUUID:(id)arg0 captureMode:(NSInteger)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scrubberImage:(id)arg5 finalExpectedPixelSize:(struct CGSize )arg6 duration:(struct ? )arg7 stillPersistenceUUID:(id)arg8 stillDisplayTime:(struct ? )arg9 coordinationInfo:(id)arg10 ;


@end


#endif