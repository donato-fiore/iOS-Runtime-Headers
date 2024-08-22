// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYDIAGNOSTICSOPTIONS_H
#define HMACCESSORYDIAGNOSTICSOPTIONS_H

@class NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HMAccessoryDiagnosticsOptions : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSNumber *delay; // ivar: _delay
@property (readonly, nonatomic) BOOL enableAudioClips; // ivar: _enableAudioClips
@property (readonly, nonatomic) NSNumber *logSize; // ivar: _logSize
@property (readonly, nonatomic) BOOL metadataRequired; // ivar: _metadataRequired
@property (readonly, nonatomic) BOOL recordAudio; // ivar: _recordAudio
@property (readonly, nonatomic) NSInteger snapshotType; // ivar: _snapshotType


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLogSizeBytes:(id)arg0 delaySeconds:(id)arg1 snapshotType:(NSInteger)arg2 recordAudio:(BOOL)arg3 enableAudioClips:(BOOL)arg4 cloudkitMetadataRequired:(BOOL)arg5 ;
-(id)payloadMetadata;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif