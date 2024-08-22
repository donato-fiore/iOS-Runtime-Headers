// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERCHANGEOBSERVER_H
#define AVTSTICKERCHANGEOBSERVER_H

@protocol AVTPBackendImageHandlingDelegate, AVTStickerBackend;

#import <Foundation/Foundation.h>

#import "AVTCoreEnvironment.h"

@interface AVTStickerChangeObserver : NSObject

@property (readonly, nonatomic) AVTCoreEnvironment *environment; // ivar: _environment
@property (weak, nonatomic) NSObject<AVTPBackendImageHandlingDelegate> *imageHandlingDelegate; // ivar: _imageHandlingDelegate
@property (readonly, nonatomic) NSObject<AVTStickerBackend> *stickerBackend; // ivar: _stickerBackend


-(id)initWithStickerBackend:(id)arg0 environment:(id)arg1 ;
-(void)processChangesForChangeTracker:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif