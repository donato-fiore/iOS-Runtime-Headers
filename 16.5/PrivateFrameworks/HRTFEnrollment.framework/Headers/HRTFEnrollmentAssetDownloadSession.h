// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRTFENROLLMENTASSETDOWNLOADSESSION_H
#define HRTFENROLLMENTASSETDOWNLOADSESSION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface HRTFEnrollmentAssetDownloadSession : NSObject {
    ? _options;
    id *_progressCallback;
    id *_completion;
    NSXPCConnection *_connection;
}




-(id)initWithOptions:(uint8_t)arg0 progressCallback:(short)arg1 completion:(short)arg2 ;
-(void)assetDownloadSessionProgressUpdate:(id)arg0 ;
-(void)cancel;
-(void)start;


@end


#endif