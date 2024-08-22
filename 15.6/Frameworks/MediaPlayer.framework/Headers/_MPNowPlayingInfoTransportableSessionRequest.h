// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPNOWPLAYINGINFOTRANSPORTABLESESSIONREQUEST_H
#define _MPNOWPLAYINGINFOTRANSPORTABLESESSIONREQUEST_H

@class NSString;
@protocol MPNowPlayingInfoTransportableSessionRequest;

#import <Foundation/Foundation.h>


@interface _MPNowPlayingInfoTransportableSessionRequest : NSObject <MPNowPlayingInfoTransportableSessionRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *preferredSessionType; // ivar: _preferredSessionType
@property (readonly) Class superclass;


+(id)requestWithIdentifier:(id)arg0 preferredSessionType:(id)arg1 ;


@end


#endif