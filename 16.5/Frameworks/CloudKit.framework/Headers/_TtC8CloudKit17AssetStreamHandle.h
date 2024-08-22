// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8CLOUDKIT17ASSETSTREAMHANDLE_H
#define _TTC8CLOUDKIT17ASSETSTREAMHANDLE_H


#import <Foundation/Foundation.h>


@interface _TtC8CloudKit17AssetStreamHandle : NSObject {
    ? chunkHandles;
    ? assetType;
}




+(?)makeAssetStreamHandleFrom:(?)arg0 with:(?)arg1 forcompletionHandler;
+(BOOL)useNetworkingDelegate;
+(id)networkRequestOptions;
+(void)setUseNetworkingDelegate:(BOOL)arg0 ;
-(id)init;
-(id)initFrom:(id)arg0 error:(*id)arg1 ;
-(id)makeAVPlayerItemWith:(id)arg0 options:(id)arg1 ;
-(id)serializedDataAndReturnError:(*id)arg0 ;


@end


#endif