// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWPENDINGIRISRECORDINGREQUEST_H
#define BWPENDINGIRISRECORDINGREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "BWIrisMovieInfo.h"
#import "FigCaptureMovieFileRecordingSettings.h"

@interface BWPendingIrisRecordingRequest : NSObject <NSCopying>



@property (nonatomic) NSInteger enqueuedHostTime; // ivar: _enqueuedHostTime
@property (retain, nonatomic) BWIrisMovieInfo *irisMovieInfo; // ivar: _irisMovieInfo
@property (readonly, nonatomic) BOOL isEmpty;
@property (nonatomic) ? momentCaptureMovieRecordingMasterEndTime; // ivar: _momentCaptureMovieRecordingMasterEndTime
@property (nonatomic, getter=isPairedRequestCreated) BOOL pairedRequestCreated; // ivar: _pairedRequestCreated
@property (readonly, nonatomic) FigCaptureMovieFileRecordingSettings *settings; // ivar: _settings


+(id)irisRecordingRequestWithFigCaptureMovieFileRecordingSettings:(id)arg0 ;
-(id)_initWithFigCaptureMovieFileRecordingSettings:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif