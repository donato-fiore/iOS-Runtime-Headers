// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTURESESSIONCONFIGURATION_H
#define AVCAPTURESESSIONCONFIGURATION_H

@class NSArray, NSHashTable;

#import <Foundation/Foundation.h>


@interface AVCaptureSessionConfiguration : NSObject

@property (readonly) NSInteger configurationID; // ivar: _configurationID
@property (readonly) NSArray *connections; // ivar: _connections
@property (readonly) NSArray *inputs; // ivar: _inputs
@property (readonly) NSArray *outputs; // ivar: _outputs
@property (readonly) NSHashTable *videoPreviewLayers; // ivar: _videoPreviewLayers


-(id)initWithConfigurationID:(NSInteger)arg0 inputs:(id)arg1 outputs:(id)arg2 videoPreviewLayers:(id)arg3 connections:(id)arg4 ;
-(id)uniqueConnections:(id)arg0 ;
-(id)uniqueInputs:(id)arg0 ;
-(id)uniqueOutputs:(id)arg0 ;
-(id)uniqueVideoPreviewLayers:(id)arg0 ;
-(void)dealloc;


@end


#endif