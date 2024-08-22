// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMAPIRADIOGENREROOMREQUEST_H
#define NMAPIRADIOGENREROOMREQUEST_H

@class NSURL;


#import "NMAPIRequest.h"

@interface NMAPIRadioGenreRoomRequest : NMAPIRequest

@property (copy, nonatomic) NSURL *URL; // ivar: _URL


-(Class)responseParserClass;
-(id)_bagRoomURLRegularExpressionWithStoreURLBag:(id)arg0 ;
-(id)_roomIdentifierWithStoreURLBag:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)urlComponentsWithStoreURLBag:(id)arg0 error:(*id)arg1 ;


@end


#endif