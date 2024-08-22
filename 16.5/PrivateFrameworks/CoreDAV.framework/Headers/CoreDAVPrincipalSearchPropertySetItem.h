// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVPRINCIPALSEARCHPROPERTYSETITEM_H
#define COREDAVPRINCIPALSEARCHPROPERTYSETITEM_H

@class NSMutableSet;


#import "CoreDAVItem.h"

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *principalSearchProperties; // ivar: _principalSearchProperties


+(id)copyParseRules;
-(id)description;
-(id)init;
-(void)addPrincipalSearchProperty:(id)arg0 ;


@end


#endif