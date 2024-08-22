// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STASKFORTIMEREQUEST_H
#define STASKFORTIMEREQUEST_H

@class NSDictionary, NSUUID, NSString, NSNumber, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STAskForTimeRequest : NSObject <NSSecureCoding>



@property (nonatomic) BOOL deliverQuietly; // ivar: _deliverQuietly
@property (nonatomic) BOOL oneMoreMinute; // ivar: _oneMoreMinute
@property (readonly, copy, nonatomic) NSDictionary *payload;
@property (retain, nonatomic) NSUUID *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, copy, nonatomic) NSString *requestedResourceIdentifier; // ivar: _requestedResourceIdentifier
@property (retain, nonatomic) NSNumber *requestingUserDSID; // ivar: _requestingUserDSID
@property (copy, nonatomic) NSString *requestingUserDisplayName; // ivar: _requestingUserDisplayName
@property (copy, nonatomic) NSString *resourceDisplayName; // ivar: _resourceDisplayName
@property (retain, nonatomic) NSNumber *timeRequested; // ivar: _timeRequested
@property (retain, nonatomic) NSDate *timeStamp; // ivar: _timeStamp
@property (readonly, nonatomic) NSInteger usageType; // ivar: _usageType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithUsageType:(NSInteger)arg0 requestedResourceIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif