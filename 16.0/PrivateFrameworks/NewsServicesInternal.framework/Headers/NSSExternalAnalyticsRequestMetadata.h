// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSEXTERNALANALYTICSREQUESTMETADATA_H
#define NSSEXTERNALANALYTICSREQUESTMETADATA_H

@class NSString, NTPBSession;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSSExternalAnalyticsRequestMetadata : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *contentViewedIdentifier; // ivar: _contentViewedIdentifier
@property (readonly, copy, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (readonly, nonatomic) int eventType; // ivar: _eventType
@property (readonly, copy, nonatomic) NSString *externalAnalyticsIdentifier; // ivar: _externalAnalyticsIdentifier
@property (readonly, copy, nonatomic) NSString *publisherIdentifier; // ivar: _publisherIdentifier
@property (readonly, copy, nonatomic) NTPBSession *session; // ivar: _session


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSession:(id)arg0 eventIdentifier:(id)arg1 externalAnalyticsIdentifier:(id)arg2 contentViewedIdentifier:(id)arg3 publisherIdentifier:(id)arg4 eventType:(int)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif