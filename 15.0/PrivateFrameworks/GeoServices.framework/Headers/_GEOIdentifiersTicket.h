// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOIDENTIFIERSTICKET_H
#define _GEOIDENTIFIERSTICKET_H

@class NSArray, NSString;


#import "GEOAbstractMapServiceTicket.h"

@interface _GEOIdentifiersTicket : GEOAbstractMapServiceTicket {
    NSArray *_identifiers;
    id *_requestToken;
    int _resultProviderID;
    NSString *_contentProvider;
    NSUInteger _options;
}




-(id)description;
-(id)initWithIdentifiers:(id)arg0 resultProviderID:(int)arg1 contentProvider:(id)arg2 traits:(id)arg3 options:(NSUInteger)arg4 ;
-(id)initWithMUIDs:(id)arg0 resultProviderID:(int)arg1 contentProvider:(id)arg2 traits:(id)arg3 options:(NSUInteger)arg4 ;
-(id)initWithTraits:(id)arg0 ;
-(struct ? )dataRequestKind;
-(void)cancel;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 timeout:(id)arg2 networkActivity:(NSInteger)arg3  ;


@end


#endif