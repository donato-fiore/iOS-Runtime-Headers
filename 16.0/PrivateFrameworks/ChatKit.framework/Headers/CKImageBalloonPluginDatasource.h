// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKIMAGEBALLOONPLUGINDATASOURCE_H
#define CKIMAGEBALLOONPLUGINDATASOURCE_H

@class IMBalloonPluginDataSource;


#import "CKBalloonView.h"
#import "CKMediaObject.h"

@interface CKImageBalloonPluginDatasource : IMBalloonPluginDataSource

@property (retain, nonatomic) CKBalloonView *balloonView; // ivar: _balloonView
@property (retain, nonatomic) CKMediaObject *mediaObject; // ivar: _mediaObject


-(id)imageBalloon;
-(id)initWithPluginPayload:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)previewDidChange:(id)arg0 ;


@end


#endif