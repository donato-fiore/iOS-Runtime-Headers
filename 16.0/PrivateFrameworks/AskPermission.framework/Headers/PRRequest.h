// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRREQUEST_H
#define PRREQUEST_H

@class NSString, NSDate, NSDictionary, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRRequest : NSObject <NSSecureCoding>



@property (copy) NSString *ask; // ivar: _ask
@property (copy) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (copy) NSDate *dateAddedToLocalCache; // ivar: _dateAddedToLocalCache
@property (copy) NSString *requestID; // ivar: _requestID
@property (copy) NSDictionary *requestInfo; // ivar: _requestInfo
@property NSUInteger requestStatus; // ivar: _requestStatus
@property BOOL requestedOnThisDevice; // ivar: _requestedOnThisDevice
@property (copy) NSNumber *requesterDSID; // ivar: _requesterDSID
@property (copy) NSNumber *responderDSID; // ivar: _responderDSID
@property (readonly) NSString *statusDescription; // ivar: _statusDescription


+(BOOL)supportsSecureCoding;
-(id)cacheRepresentation;
-(id)initWithAsk:(id)arg0 requestInfo:(id)arg1 ;
-(id)initWithCacheRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif