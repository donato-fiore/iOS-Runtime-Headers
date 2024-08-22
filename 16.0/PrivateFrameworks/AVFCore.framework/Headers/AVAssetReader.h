// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETREADER_H
#define AVASSETREADER_H

@class NSError, NSArray;

#import <Foundation/Foundation.h>

#import "AVAssetReaderInternal.h"
#import "AVAsset.h"

@interface AVAssetReader : NSObject {
    AVAssetReaderInternal *_priv;
}


@property (readonly, retain, nonatomic) AVAsset *asset;
@property (readonly) NSError *error;
@property (readonly, nonatomic, getter=_figAssetReader) *OpaqueFigAssetReader figAssetReader;
@property (readonly, nonatomic) NSArray *outputs;
@property (nonatomic, getter=_readSingleSample, setter=_setReadSingleSample:) BOOL readSingleSample;
@property (readonly) NSInteger status;
@property (nonatomic) ? timeRange;


+(id)_errorForOSStatus:(int)arg0 ;
+(id)assetReaderWithAsset:(id)arg0 error:(*id)arg1 ;
+(void)initialize;
-(BOOL)_canAddOutput:(id)arg0 exceptionReason:(*id)arg1 ;
-(BOOL)canAddOutput:(id)arg0 ;
-(BOOL)startReading;
-(id)description;
-(id)init;
-(id)initWithAsset:(id)arg0 error:(*id)arg1 ;
-(void)_failWithError:(id)arg0 ;
-(void)_handleServerDiedNotification;
-(void)_outputDidFinish:(id)arg0 ;
-(void)_tearDownFigAssetReader;
-(void)_transitionToStatus:(NSInteger)arg0 failureError:(id)arg1 ;
-(void)addOutput:(id)arg0 ;
-(void)cancelReading;
-(void)dealloc;


@end


#endif