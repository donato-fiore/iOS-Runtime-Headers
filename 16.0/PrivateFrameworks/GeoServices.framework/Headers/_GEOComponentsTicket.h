// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOCOMPONENTSTICKET_H
#define _GEOCOMPONENTSTICKET_H

@class NSDictionary, NSString;


#import "GEOAbstractMapServiceTicket.h"
#import "GEOMapItemIdentifier.h"

@interface _GEOComponentsTicket : GEOAbstractMapServiceTicket {
    NSDictionary *_components;
    GEOMapItemIdentifier *_identifier;
    int _resultProviderID;
    NSString *_contentProvider;
}




-(id)description;
-(id)initWithComponents:(id)arg0 identifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)initWithTraits:(id)arg0 ;
-(struct ? )dataRequestKind;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 timeout:(id)arg2 networkActivity:(NSInteger)arg3  ;


@end


#endif