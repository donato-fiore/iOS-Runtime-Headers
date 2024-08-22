// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMAPISTARTERPACKMULTIPLEXREQUEST_H
#define NMAPISTARTERPACKMULTIPLEXREQUEST_H



#import "NMAPIRequest.h"

@interface NMAPIStarterPackMultiplexRequest : NMAPIRequest

@property (nonatomic, getter=isUnderageUser) BOOL underageUser; // ivar: _underageUser


-(Class)responseParserClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithUnderageUser:(BOOL)arg0 ;
-(id)urlComponentsWithStoreURLBag:(id)arg0 error:(*id)arg1 ;


@end


#endif