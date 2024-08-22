// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSAUDIOTANDEMSTREAM_H
#define CSAUDIOTANDEMSTREAM_H

@class NSString;
@protocol CSAudioStreamProvidingDelegate;


#import "CSAudioStream.h"

@interface CSAudioTandemStream : CSAudioStream <CSAudioStreamProvidingDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) CSAudioStream *primaryStream; // ivar: _primaryStream
@property (readonly) Class superclass;


-(BOOL)isStreaming;
-(BOOL)prepareAudioStreamSyncWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithMasterAudioStream:(id)arg0 name:(id)arg1 ;
-(void)attachToPrimaryStreamWithCompletion:(id)arg0 ;
-(void)prepareAudioStreamWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)startAudioStreamWithOption:(id)arg0 completion:(id)arg1 ;
-(void)stopAudioStreamWithOption:(id)arg0 completion:(id)arg1 ;


@end


#endif