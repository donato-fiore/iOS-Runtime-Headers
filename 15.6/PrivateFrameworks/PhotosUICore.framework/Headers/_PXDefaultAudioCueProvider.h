// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXDEFAULTAUDIOCUEPROVIDER_H
#define _PXDEFAULTAUDIOCUEPROVIDER_H

@class NSMutableDictionary;
@protocol PXAudioCueProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _PXDefaultAudioCueProvider : NSObject <PXAudioCueProvider>

 {
    NSMutableDictionary *_providersByCatalog;
    NSObject<OS_dispatch_queue> *_stateQueue;
}




-(id)_cueProviderForCatalog:(NSInteger)arg0 ;
-(id)init;
-(id)requestCuesForAudioAsset:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif