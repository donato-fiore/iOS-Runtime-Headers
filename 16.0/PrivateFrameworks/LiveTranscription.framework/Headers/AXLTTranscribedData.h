// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLTTRANSCRIBEDDATA_H
#define AXLTTRANSCRIBEDDATA_H

@class NSString, NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AXLTTranscription.h"

@interface AXLTTranscribedData : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *appID; // ivar: _appID
@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (nonatomic) NSInteger downloadProgress; // ivar: _downloadProgress
@property (retain, nonatomic) NSArray *nonUpdatingSegments; // ivar: _nonUpdatingSegments
@property (nonatomic) int pid; // ivar: _pid
@property (nonatomic) NSInteger requestType; // ivar: _requestType
@property (nonatomic, getter=isSilence) BOOL silence; // ivar: _silence
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *transcribedText; // ivar: _transcribedText
@property (retain, nonatomic) AXLTTranscription *transcription; // ivar: _transcription


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTranscribedText:(id)arg0 requestType:(NSInteger)arg1 timestamp:(id)arg2 pid:(int)arg3 appID:(id)arg4 appName:(id)arg5 downloadProgress:(NSInteger)arg6 silence:(BOOL)arg7 ;
-(id)initWithTranscription:(id)arg0 requestType:(NSInteger)arg1 timestamp:(id)arg2 pid:(int)arg3 appID:(id)arg4 appName:(id)arg5 downloadProgress:(NSInteger)arg6 silence:(BOOL)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif