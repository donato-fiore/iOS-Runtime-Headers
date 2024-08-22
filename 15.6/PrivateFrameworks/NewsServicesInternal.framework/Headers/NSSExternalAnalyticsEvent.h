// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSEXTERNALANALYTICSEVENT_H
#define NSSEXTERNALANALYTICSEVENT_H

@class NSDictionary, NTPBSession;
@protocol NSSExternalAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface NSSExternalAnalyticsEvent : NSObject <NSSExternalAnalyticsEvent>



@property (readonly, copy, nonatomic) NSDictionary *requestQueryParameters; // ivar: _requestQueryParameters
@property (readonly, copy, nonatomic) NTPBSession *session; // ivar: _session


-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSession:(id)arg0 requestQueryParameters:(id)arg1 ;
-(id)requestMetadataWithExternalAnalyticsIdentifier:(id)arg0 ;


@end


#endif