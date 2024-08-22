// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHRESOURCELOCALAVAILABILITYREQUESTOPTIONS_H
#define PHRESOURCELOCALAVAILABILITYREQUESTOPTIONS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PHResourceLocalAvailabilityRequestOptions : NSObject

@property (nonatomic) BOOL dontAllowRAW; // ivar: _dontAllowRAW
@property (nonatomic) BOOL includeAllAssetResources; // ivar: _includeAllAssetResources
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue; // ivar: _resultHandlerQueue
@property (nonatomic) BOOL treatLivePhotoAsStill; // ivar: _treatLivePhotoAsStill


-(id)description;


@end


#endif