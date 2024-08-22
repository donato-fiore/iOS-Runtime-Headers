// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVCURRENTUSERPRIVILEGESETITEM_H
#define COREDAVCURRENTUSERPRIVILEGESETITEM_H

@class NSMutableSet;


#import "CoreDAVItem.h"

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges; // ivar: _privileges


+(id)copyParseRules;
-(BOOL)hasPrivilegeWithNameSpace:(id)arg0 andName:(id)arg1 ;
-(id)description;
-(id)init;
-(void)addPrivilege:(id)arg0 ;


@end


#endif