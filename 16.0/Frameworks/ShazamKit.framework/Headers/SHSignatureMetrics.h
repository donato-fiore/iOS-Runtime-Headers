// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSIGNATUREMETRICS_H
#define SHSIGNATUREMETRICS_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SHSignatureMetrics : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger audioRecordingSource; // ivar: _audioRecordingSource
@property (readonly, nonatomic) CGFloat sessionDuration;
@property (readonly, nonatomic) NSDate *sessionStartDate; // ivar: _sessionStartDate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionStartDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif