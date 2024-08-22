// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVEFSUSBLOCALSTORAGECLIENT_H
#define LIVEFSUSBLOCALSTORAGECLIENT_H

@class LiveFSClient;



@interface LiveFSUSBLocalStorageClient : LiveFSClient



+(id)newManager;
-(id)addDisk:(id)arg0 ;
-(id)loadVolumes:(id)arg0 ofType:(id)arg1 withError:(*id)arg2 ;
-(id)removeAllVirtualDisks;
-(void)loadVolume:(id)arg0 ofType:(id)arg1 withReply:(id)arg2 ;


@end


#endif