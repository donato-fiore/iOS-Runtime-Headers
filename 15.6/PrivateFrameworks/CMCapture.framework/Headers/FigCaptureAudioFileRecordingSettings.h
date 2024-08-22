// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTUREAUDIOFILERECORDINGSETTINGS_H
#define FIGCAPTUREAUDIOFILERECORDINGSETTINGS_H

@class NSDictionary, NSArray;


#import "FigCaptureRecordingSettings.h"

@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings

@property (copy, nonatomic) NSDictionary *audioSettings; // ivar: _audioSettings
@property (copy, nonatomic) NSArray *metadata; // ivar: _metadata


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif