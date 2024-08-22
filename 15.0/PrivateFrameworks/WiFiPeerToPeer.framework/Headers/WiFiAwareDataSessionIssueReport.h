// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIAWAREDATASESSIONISSUEREPORT_H
#define WIFIAWAREDATASESSIONISSUEREPORT_H

@class NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WiFiAwareDataSessionIssueReport : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSNumber *rtpSequenceNumber; // ivar: _rtpSequenceNumber
@property (copy, nonatomic) NSNumber *rtpStartTime; // ivar: _rtpStartTime


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)rtpSequenceNumberEquals:(id)arg0 ;
-(BOOL)rtpStartTimeEquals:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif