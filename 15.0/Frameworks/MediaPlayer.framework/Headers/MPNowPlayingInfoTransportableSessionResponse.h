// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPNOWPLAYINGINFOTRANSPORTABLESESSIONRESPONSE_H
#define MPNOWPLAYINGINFOTRANSPORTABLESESSIONRESPONSE_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface MPNowPlayingInfoTransportableSessionResponse : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *sessionType; // ivar: _sessionType


+(id)responseWithIdentifier:(id)arg0 sessionType:(id)arg1 data:(id)arg2 ;
-(id)_init;


@end


#endif