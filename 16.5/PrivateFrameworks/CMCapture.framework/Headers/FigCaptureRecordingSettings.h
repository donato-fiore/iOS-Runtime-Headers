// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURERECORDINGSETTINGS_H
#define FIGCAPTURERECORDINGSETTINGS_H

@class NSString, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FigCaptureRecordingSettings : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) ? maxDuration; // ivar: _maxDuration
@property (nonatomic) NSInteger maxFileSize; // ivar: _maxFileSize
@property (nonatomic) NSInteger minFreeDiskSpaceLimit; // ivar: _minFreeDiskSpaceLimit
@property (copy, nonatomic) NSString *outputFileType; // ivar: _outputFileType
@property (copy, nonatomic) NSURL *outputURL; // ivar: _outputURL
@property (nonatomic) NSInteger settingsID; // ivar: _settingsID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif