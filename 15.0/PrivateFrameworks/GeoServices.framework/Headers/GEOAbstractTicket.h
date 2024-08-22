// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOABSTRACTTICKET_H
#define GEOABSTRACTTICKET_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "GEODataRequestThrottlerToken.h"
#import "GEOMapServiceTraits.h"

@interface GEOAbstractTicket : NSObject {
    BOOL _cancelled;
    GEODataRequestThrottlerToken *_throttlerToken;
}


@property (nonatomic) NSUInteger cachePolicy; // ivar: _cachePolicy
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) NSDictionary *responseUserInfo; // ivar: _responseUserInfo
@property (readonly, nonatomic) GEOMapServiceTraits *traits; // ivar: _traits


-(id)description;
-(id)init;
-(id)initWithTraits:(id)arg0 ;
-(void)cancel;
-(void)setThrottlerToken:(id)arg0 ;


@end


#endif