// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSSOSPREYTTSCLIENT_H
#define SFSSOSPREYTTSCLIENT_H

@class OspreyChannel, NSString;



@interface SFSSOspreyTTSClient : OspreyChannel

@property (retain, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (nonatomic) BOOL useBlazar; // ivar: _useBlazar


+(id)sharedInstance;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 useBlazar:(BOOL)arg1 enableAuthentication:(BOOL)arg2 ;
-(void)prewarm;
// -(void)streamBlazarTTS:(id)arg0 beginHandler:(id)arg1 chunkHandler:(unk)arg2 endHandler:(id)arg3 completion:(unk)arg4  ;
// -(void)streamNativeTTS:(id)arg0 beginHandler:(id)arg1 chunkHandler:(unk)arg2 endHandler:(id)arg3 completion:(unk)arg4  ;
// -(void)streamTTS:(id)arg0 beginHandler:(id)arg1 chunkHandler:(unk)arg2 endHandler:(id)arg3 completion:(unk)arg4  ;


@end


#endif