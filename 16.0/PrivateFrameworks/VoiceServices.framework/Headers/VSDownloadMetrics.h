// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSDOWNLOADMETRICS_H
#define VSDOWNLOADMETRICS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface VSDownloadMetrics : NSObject

@property (copy) NSString *clientBundleIdentifier; // ivar: _clientBundleIdentifier
@property BOOL discretionary; // ivar: _discretionary
@property (readonly) NSInteger downloadBeginTimestamp; // ivar: _downloadBeginTimestamp
@property (readonly) NSInteger downloadEndTimestamp; // ivar: _downloadEndTimestamp
@property float downloadProgress; // ivar: _downloadProgress
@property (copy) NSNumber *downloadSize; // ivar: _downloadSize
@property NSInteger errorCode; // ivar: _errorCode
@property BOOL isCellularAllowed; // ivar: _isCellularAllowed
@property CGFloat setupTimeInterval; // ivar: _setupTimeInterval
@property (readonly) NSString *voiceDownloadKey; // ivar: _voiceDownloadKey


+(CGFloat)_clockFactor;
-(BOOL)endMetrics;
-(CGFloat)downloadDuration;
-(id)description;
-(id)dictionaryMetrics;
-(id)initWithVoiceName:(id)arg0 languageCode:(id)arg1 gender:(NSInteger)arg2 ;


@end


#endif