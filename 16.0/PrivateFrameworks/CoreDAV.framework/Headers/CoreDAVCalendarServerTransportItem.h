// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVCALENDARSERVERTRANSPORTITEM_H
#define COREDAVCALENDARSERVERTRANSPORTITEM_H



#import "CoreDAVItem.h"
#import "CoreDAVLeafItem.h"
#import "CoreDAVItemWithHrefChildItem.h"

@interface CoreDAVCalendarServerTransportItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *apsBundleID; // ivar: _apsBundleID
@property (retain, nonatomic) CoreDAVLeafItem *apsEnv; // ivar: _apsEnv
@property (retain, nonatomic) CoreDAVLeafItem *courierServer; // ivar: _courierServer
@property (retain, nonatomic) CoreDAVLeafItem *refreshInterval; // ivar: _refreshInterval
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *subscriptionURL; // ivar: _subscriptionURL
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *tokenURL; // ivar: _tokenURL
@property (retain, nonatomic) CoreDAVLeafItem *xmppServer; // ivar: _xmppServer
@property (retain, nonatomic) CoreDAVLeafItem *xmppURI; // ivar: _xmppURI


+(id)copyParseRules;
-(id)description;
-(id)init;


@end


#endif