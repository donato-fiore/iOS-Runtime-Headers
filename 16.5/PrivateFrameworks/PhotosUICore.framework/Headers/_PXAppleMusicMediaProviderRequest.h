// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXAPPLEMUSICMEDIAPROVIDERREQUEST_H
#define _PXAPPLEMUSICMEDIAPROVIDERREQUEST_H


#import <Foundation/Foundation.h>

#import "PXAppleMusicAsset.h"
#import "PXAudioRequestOptions.h"

@interface _PXAppleMusicMediaProviderRequest : NSObject

@property (readonly, nonatomic) PXAppleMusicAsset *asset; // ivar: _asset
@property (readonly, nonatomic) PXAudioRequestOptions *options; // ivar: _options
@property (readonly, nonatomic) NSInteger requestID; // ivar: _requestID
@property (readonly, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (nonatomic) NSInteger signpostID; // ivar: _signpostID


-(id)init;
-(id)initWithAsset:(id)arg0 options:(id)arg1 requestID:(NSInteger)arg2 resultHandler:(id)arg3 ;


@end


#endif