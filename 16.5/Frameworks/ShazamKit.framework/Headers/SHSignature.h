// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSIGNATURE_H
#define SHSIGNATURE_H

@class NSUUID, NSDate, NSData, AVAudioTime;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SHSignatureMetrics.h"

@interface SHSignature : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUUID *_ID; // ivar: __ID
@property (retain, nonatomic) NSDate *audioStartDate; // ivar: _audioStartDate
@property (readonly, nonatomic) NSData *dataRepresentation; // ivar: _dataRepresentation
@property (readonly, nonatomic) CGFloat duration;
@property (copy, nonatomic) SHSignatureMetrics *metrics; // ivar: _metrics
@property (retain, nonatomic) AVAudioTime *time; // ivar: _time


+(BOOL)supportsSecureCoding;
+(id)signatureFromData:(id)arg0 atTime:(id)arg1 error:(*id)arg2 ;
+(id)signatureWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)_audioRepresentation;
-(id)_startDateBasedUponAudioTime:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)initWithID:(id)arg0 dataRepresentation:(id)arg1 startTime:(id)arg2 error:(*id)arg3 ;
-(void)commonSetupWithID:(id)arg0 dataRepresentation:(id)arg1 startTime:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif