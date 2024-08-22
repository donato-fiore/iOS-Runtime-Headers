// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARCONFIGURATIONIMAGERENDERER_H
#define AVTAVATARCONFIGURATIONIMAGERENDERER_H

@class AVTMemoji, AVTSnapshotBuilder;
@protocol AVTUILogger, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVTAvatarConfigurationImageRenderer : NSObject

@property (readonly, nonatomic) AVTMemoji *avatar; // ivar: _avatar
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (retain, nonatomic) AVTSnapshotBuilder *snapshotBuilder; // ivar: _snapshotBuilder
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotBuilderQueue; // ivar: _snapshotBuilderQueue


-(id)imageForAvatarConfiguration:(id)arg0 scope:(id)arg1 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 avatar:(id)arg1 ;
// -(id)initWithSnapshotBuilder:(id)arg0 avatar:(id)arg1 lockProvider:(id)arg2 logger:(unk)arg3  ;
-(id)nts_imageForAvatarConfiguration:(id)arg0 scope:(id)arg1 ;


@end


#endif