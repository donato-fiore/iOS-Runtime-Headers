// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXVIDEOCONTENTPROVIDER_H
#define PXVIDEOCONTENTPROVIDER_H

@class NSDictionary, ISWrappedAVAudioSession, NSString, NSNumber;


#import "PXObservable.h"
#import "PXVideoContentProviderLoadingResult.h"

@interface PXVideoContentProvider : PXObservable

@property (readonly, nonatomic) NSDictionary *analyticsPayload;
@property (readonly, nonatomic) ISWrappedAVAudioSession *audioSession; // ivar: _audioSession
@property (readonly, copy, nonatomic) NSString *contentIdentifier; // ivar: _contentIdentifier
@property (nonatomic) CGFloat loadingProgress; // ivar: _loadingProgress
@property (retain, nonatomic) PXVideoContentProviderLoadingResult *loadingResult; // ivar: _loadingResult
@property (retain, nonatomic) NSNumber *videoAspectRatio; // ivar: _videoAspectRatio


-(id)mutableChangeObject;
-(void)beginLoadingWithPriority:(NSInteger)arg0 ;
-(void)cancelLoading;
-(void)makeUniqueContentIdentifier;


@end


#endif