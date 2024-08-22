// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPINMEMORYAVASSET_H
#define VCPINMEMORYAVASSET_H

@class AVURLAsset, NSData, NSString;
@protocol AVAssetResourceLoaderDelegate;



@interface VCPInMemoryAVAsset : AVURLAsset <AVAssetResourceLoaderDelegate>

 {
    NSData *_data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)assetWithData:(id)arg0 ;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(id)initWithData:(id)arg0 ;


@end


#endif