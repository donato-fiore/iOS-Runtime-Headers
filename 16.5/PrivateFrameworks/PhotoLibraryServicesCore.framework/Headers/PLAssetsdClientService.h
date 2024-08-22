// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETSDCLIENTSERVICE_H
#define PLASSETSDCLIENTSERVICE_H

@class NSMutableArray, NSString;
@protocol PLAssetsdClientServiceProtocol;

#import <Foundation/Foundation.h>


@interface PLAssetsdClientService : NSObject <PLAssetsdClientServiceProtocol>

 {
    NSMutableArray *_libraryUnavailabilityHandlers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addPhotoLibraryUnavailabilityHandler:(id)arg0 ;
-(void)downloadStatusForIdentifier:(id)arg0 progress:(CGFloat)arg1 completed:(BOOL)arg2 data:(id)arg3 error:(id)arg4 ;
-(void)libraryBecameUnavailable:(id)arg0 reason:(id)arg1 ;


@end


#endif