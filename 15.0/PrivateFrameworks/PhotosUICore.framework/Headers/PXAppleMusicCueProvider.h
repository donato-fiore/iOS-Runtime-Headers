// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXAPPLEMUSICCUEPROVIDER_H
#define PXAPPLEMUSICCUEPROVIDER_H

@class NSString;
@protocol PXAudioCueProvider;

#import <Foundation/Foundation.h>


@interface PXAppleMusicCueProvider : NSObject <PXAudioCueProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)requestCuesForAudioAsset:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif