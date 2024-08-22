// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHEETACTIVITYITEMUTILITIES_H
#define SHSHEETACTIVITYITEMUTILITIES_H


#import <Foundation/Foundation.h>


@interface SHSheetActivityItemUtilities : NSObject



+(id)itemProvidersFromActivityItems:(id)arg0 ;
+(id)urlForActivityItem:(id)arg0 ;
+(void)_loadMetadataFromRemainingGroupActivityItemProviders:(id)arg0 loadedMetadata:(id)arg1 loadedError:(id)arg2 completion:(id)arg3 ;
+(void)loadMetadataFromGroupActivityItemProviders:(id)arg0 completion:(id)arg1 ;


@end


#endif