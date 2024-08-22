// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMAPIRECENTRADIOSTATIONSREQUEST_H
#define NMAPIRECENTRADIOSTATIONSREQUEST_H



#import "NMAPIRequest.h"

@interface NMAPIRecentRadioStationsRequest : NMAPIRequest

@property (nonatomic) NSUInteger limit; // ivar: _limit


-(Class)responseParserClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)urlComponentsWithStoreURLBag:(id)arg0 error:(*id)arg1 ;


@end


#endif