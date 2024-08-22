// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOKITLIVEPHOTOVIDEOCONTENTPROVIDERSPEC_H
#define PXPHOTOKITLIVEPHOTOVIDEOCONTENTPROVIDERSPEC_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXPhotoKitLivePhotoVideoContentProviderSpec : NSObject <NSCopying>



@property (nonatomic) ? crossfadeDuration; // ivar: _crossfadeDuration
@property (nonatomic) ? loopStartTime; // ivar: _loopStartTime
@property (nonatomic) ? loopTimeRange; // ivar: _loopTimeRange
@property (nonatomic) BOOL stabilizeIfPossible; // ivar: _stabilizeIfPossible
@property (nonatomic) BOOL wantsAudio; // ivar: _wantsAudio


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifier;
-(id)init;


@end


#endif