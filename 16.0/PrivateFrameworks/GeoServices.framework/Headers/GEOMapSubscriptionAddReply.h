// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPSUBSCRIPTIONADDREPLY_H
#define GEOMAPSUBSCRIPTIONADDREPLY_H

@class NSString;
@protocol GEOXPCReply;


#import "GEOXPCReply.h"
#import "GEOMapDataSubscription.h"

@interface GEOMapSubscriptionAddReply : GEOXPCReply <GEOXPCReply>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOMapDataSubscription *subscription; // ivar: _subscription
@property (readonly) Class superclass;


-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif