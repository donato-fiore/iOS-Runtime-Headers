// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVCURRENTUSERPRINCIPALITEM_H
#define COREDAVCURRENTUSERPRINCIPALITEM_H



#import "CoreDAVItem.h"
#import "CoreDAVHrefItem.h"
#import "CoreDAVItemWithNoChildren.h"

@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href; // ivar: _href
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated; // ivar: _unauthenticated


+(id)copyParseRules;
-(id)description;
-(id)init;


@end


#endif