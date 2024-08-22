// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCOMPANIONIRISVIDEOEXPORTSESSION_H
#define NTKCOMPANIONIRISVIDEOEXPORTSESSION_H

@class NSError, NSURL, AVAsset;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKCompanionIrisVideoExportSession : NSObject {
    NSObject<OS_dispatch_queue> *_exportQueue;
    NSObject<OS_dispatch_queue> *_encodeQueue;
}


@property (readonly, nonatomic) NSUInteger bitrate; // ivar: _bitrate
@property (readonly, nonatomic) CGRect crop; // ivar: _crop
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) CGSize outputSize; // ivar: _outputSize
@property (readonly, nonatomic) NSURL *outputURL; // ivar: _outputURL
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly, nonatomic) AVAsset *video; // ivar: _video


-(id)_makeReader;
-(id)_makeWriter;
-(id)initWithVideo:(id)arg0 crop:(struct CGRect )arg1 outputSize:(struct CGSize )arg2 bitrate:(NSUInteger)arg3 outputURL:(id)arg4 ;
-(void)exportAsynchronouslyWithCompletion:(id)arg0 ;


@end


#endif