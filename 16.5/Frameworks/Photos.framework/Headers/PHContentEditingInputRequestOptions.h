// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHCONTENTEDITINGINPUTREQUESTOPTIONS_H
#define PHCONTENTEDITINGINPUTREQUESTOPTIONS_H

@class NSString;
@protocol PHMediaRequestThreadingOptions, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PHContentEditingInputRequestOptions : NSObject <PHMediaRequestThreadingOptions>



@property (copy, nonatomic) id *canHandleAdjustmentData; // ivar: _canHandleAdjustmentData
@property (copy, nonatomic) id *canHandleRAW; // ivar: _canHandleRAW
@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dontAllowRAW; // ivar: _dontAllowRAW
@property (nonatomic) BOOL editAsOvercapture; // ivar: _editAsOvercapture
@property (nonatomic) BOOL forcePrepareCurrentBaseVersionInAddition; // ivar: _forcePrepareCurrentBaseVersionInAddition
@property (nonatomic) BOOL forceReturnFullLivePhoto; // ivar: _forceReturnFullLivePhoto
@property (nonatomic) BOOL forceRunAsUnadjustedAsset; // ivar: _forceRunAsUnadjustedAsset
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL loadResourcesToFlip; // ivar: _loadResourcesToFlip
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed
@property (nonatomic) NSUInteger originalChoice; // ivar: _originalChoice
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue; // ivar: _resultHandlerQueue
@property (nonatomic) BOOL shouldForceOriginalChoice; // ivar: _shouldForceOriginalChoice
@property (nonatomic) BOOL skipDisplaySizeImage; // ivar: _skipDisplaySizeImage
@property (nonatomic) BOOL skipLivePhotoImageAndAVAsset; // ivar: _skipLivePhotoImageAndAVAsset
@property (readonly) Class superclass;
@property (nonatomic) CGSize targetSize; // ivar: _targetSize


-(BOOL)isSynchronous;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif