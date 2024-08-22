// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIMEMORYAVASSET_H
#define HMIMEMORYAVASSET_H

@class AVURLAsset, NSData, NSString;
@protocol AVAssetResourceLoaderDelegate, HMFLogging;



@interface HMIMemoryAVAsset : AVURLAsset <AVAssetResourceLoaderDelegate, HMFLogging>

 {
    NSData *_data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)loadValuesSynchronously;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(id)initWithData:(id)arg0 ;


@end


#endif