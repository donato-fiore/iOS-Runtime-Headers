// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCATRANSMISSIONPROGRESS_H
#define CTCATRANSMISSIONPROGRESS_H

@class NSNumber, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCATransmissionProgress : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *estimatedDurationSeconds; // ivar: _estimatedDurationSeconds
@property (nonatomic) NSInteger payloadType; // ivar: _payloadType
@property (retain, nonatomic) NSNumber *progressPercents; // ivar: _progressPercents
@property (retain, nonatomic) NSDate *startedAt; // ivar: _startedAt


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif