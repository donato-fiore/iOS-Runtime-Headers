// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVDENYITEM_H
#define COREDAVDENYITEM_H

@class NSMutableSet;


#import "CoreDAVItem.h"

@interface CoreDAVDenyItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges; // ivar: _privileges


+(id)copyParseRules;
-(id)description;
-(id)init;
-(void)addPrivilege:(id)arg0 ;
-(void)write:(id)arg0 ;


@end


#endif