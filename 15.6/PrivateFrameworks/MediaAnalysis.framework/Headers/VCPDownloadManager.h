// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPDOWNLOADMANAGER_H
#define VCPDOWNLOADMANAGER_H

@class NSMutableData, NSString, NSURLSessionDataTask;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface VCPDownloadManager : NSObject {
    NSObject<OS_dispatch_semaphore> *_mutex;
    NSMutableData *_buffer;
    NSString *_localIdentifier;
    NSUInteger _length;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSURLSessionDataTask *_dataTask;
}


@property (copy, nonatomic) id *cancel; // ivar: _cancel


+(NSUInteger)maxSizeBytes;
+(id)sharedManager;
+(void)_reportDownload:(NSUInteger)arg0 ;
-(id)init;
-(id)requestDownloadOfResource:(id)arg0 ;
-(void)flush;


@end


#endif