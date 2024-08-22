// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXAPPLEMUSICCUEPROVIDER_H
#define PXAPPLEMUSICCUEPROVIDER_H

@protocol PXAudioCueProvider;

#import <Foundation/Foundation.h>


@interface PXAppleMusicCueProvider : NSObject <PXAudioCueProvider>





-(id)requestCuesForAudioAsset:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif