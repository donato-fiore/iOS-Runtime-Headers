// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIVEFSSERVICEUSERCLIENT_H
#define LIVEFSSERVICEUSERCLIENT_H



#import "LiveFSUserClient.h"

@interface LiveFSServiceUserClient : LiveFSUserClient {
    unsigned int volumePort;
}




-(id)init;
-(int)closeFileDescriptorForKernel:(int)arg0 ;
-(int)openFileDescriptorForKernel:(int)arg0 flags:(int)arg1 ;
-(unsigned int)createVolumePort;
-(unsigned int)getVolumePort;


@end


#endif