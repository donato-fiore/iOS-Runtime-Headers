// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVITEMWITHHREFCHILDREN_H
#define COREDAVITEMWITHHREFCHILDREN_H

@class NSMutableSet;


#import "CoreDAVItem.h"
#import "CoreDAVItemWithNoChildren.h"

@interface CoreDAVItemWithHrefChildren : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *hrefs; // ivar: _hrefs
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated; // ivar: _unauthenticated


+(id)copyParseRules;
-(id)description;
-(void)addHref:(id)arg0 ;


@end


#endif