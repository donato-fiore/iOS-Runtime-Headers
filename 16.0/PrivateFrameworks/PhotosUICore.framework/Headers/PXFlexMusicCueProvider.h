// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFLEXMUSICCUEPROVIDER_H
#define PXFLEXMUSICCUEPROVIDER_H

@class NSMutableArray, NSString;
@protocol PXChangeObserver, PXAudioCueProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXFlexMusicLibrary.h"

@interface PXFlexMusicCueProvider : NSObject <PXChangeObserver, PXAudioCueProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    PXFlexMusicLibrary *_library;
    NSMutableArray *_requests;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)requestCuesForAudioAsset:(id)arg0 resultHandler:(id)arg1 ;
-(void)_deliverCuesIfNeeded;
-(void)_fetchCuesForAudioAsset:(id)arg0 resultHandler:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif