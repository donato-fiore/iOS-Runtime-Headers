// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXGEOTILELOADER_H
#define ATXGEOTILELOADER_H

@protocol ATXGEOTileLoaderProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXGEOTileLoader : NSObject <ATXGEOTileLoaderProtocol>

 {
    NSObject<OS_dispatch_queue> *_callbackQueue;
}




-(id)init;
-(id)tileKeyListForLocation:(id)arg0 ;
-(void)requestGEOTileDataForLocation:(id)arg0 tileDataHandler:(id)arg1 ;
-(void)requestGEOTileDataForLocation:(id)arg0 tileLoader:(id)arg1 tileDataHandler:(id)arg2 ;


@end


#endif