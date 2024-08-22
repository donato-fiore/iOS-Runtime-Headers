// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12NANOUNIVERSE22AEGIRCLOUDCOVERSERVICE_H
#define _TTC12NANOUNIVERSE22AEGIRCLOUDCOVERSERVICE_H

@class NSURL;
@protocol NUNIFileConverter;

#import <Foundation/Foundation.h>


@interface _TtC12NanoUniverse22AegirCloudCoverService : NSObject {
    ? directory;
    ? configuration;
    ? refreshTimeIntervalInSeconds;
    ? imageScale;
    ? privateQueue;
    ? startBackoffInterval;
    ? maxBackoffInterval;
    ? dispatchSourceTimer;
    ? operationsInProgress;
    ? backoffInterval;
    ? session;
    ? authenticator;
}


@property (nonatomic, readonly) BOOL canFetchData;
@property (nonatomic, copy) NSURL *directory;
@property (nonatomic) BOOL disableFetch; // ivar: disableFetch
@property (nonatomic, retain) NSObject<NUNIFileConverter> *fileConverter; // ivar: fileConverter


-(id)cloudTextureURLs;
-(id)init;
-(id)initWithImageScale:(float)arg0 ;
-(void)retrieveCloudTextureURLsWithNotifyOn:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif