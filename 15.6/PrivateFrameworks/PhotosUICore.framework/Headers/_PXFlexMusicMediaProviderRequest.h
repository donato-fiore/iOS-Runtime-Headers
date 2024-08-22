// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXFLEXMUSICMEDIAPROVIDERREQUEST_H
#define _PXFLEXMUSICMEDIAPROVIDERREQUEST_H


#import <Foundation/Foundation.h>

#import "PXFlexMusicAsset.h"
#import "PXAudioRequestOptions.h"

@interface _PXFlexMusicMediaProviderRequest : NSObject

@property (readonly, nonatomic) PXFlexMusicAsset *asset; // ivar: _asset
@property (readonly, nonatomic) PXAudioRequestOptions *options; // ivar: _options
@property (readonly, nonatomic) NSInteger requestID; // ivar: _requestID
@property (readonly, nonatomic) id *resultHandler; // ivar: _resultHandler


-(id)init;
-(id)initWithAsset:(id)arg0 options:(id)arg1 requestID:(NSInteger)arg2 resultHandler:(id)arg3 ;


@end


#endif