// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVPRINCIPALITEM_H
#define COREDAVPRINCIPALITEM_H



#import "CoreDAVItem.h"
#import "CoreDAVItemWithNoChildren.h"
#import "CoreDAVHrefItem.h"

@interface CoreDAVPrincipalItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *all; // ivar: _all
@property (retain, nonatomic) CoreDAVItemWithNoChildren *authenticated; // ivar: _authenticated
@property (retain, nonatomic) CoreDAVHrefItem *href; // ivar: _href
@property (retain, nonatomic) CoreDAVItem *property; // ivar: _property
@property (retain, nonatomic) CoreDAVItemWithNoChildren *selfItem; // ivar: _selfItem
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated; // ivar: _unauthenticated


+(id)copyParseRules;
-(id)description;
-(id)hashString;
-(id)init;
-(id)initTypeIsAll;
-(id)initTypeIsAuthenticated;
-(id)initTypeIsHREFWithURL:(id)arg0 ;
-(id)initTypeIsProperty:(id)arg0 ;
-(id)initTypeIsSelf;
-(void)write:(id)arg0 ;


@end


#endif