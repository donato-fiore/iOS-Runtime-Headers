// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSPREYTTSSERVICE_H
#define OSPREYTTSSERVICE_H

@class OspreyChannel, NSString;



@interface OspreyTTSService : OspreyChannel

@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID


+(id)ospreyServiceEndpointURL;
+(id)sharedInstance;
-(id)init;
-(void)roundTripTTS:(id)arg0 responseHandler:(id)arg1 ;
// -(void)streamTTS:(id)arg0 beginHandler:(id)arg1 chunkHandler:(unk)arg2 endHandler:(id)arg3 completion:(unk)arg4  ;


@end


#endif