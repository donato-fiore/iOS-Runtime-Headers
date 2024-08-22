// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVGRANTITEM_H
#define COREDAVGRANTITEM_H

@class NSMutableSet;


#import "CoreDAVItem.h"

@interface CoreDAVGrantItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges; // ivar: _privileges


+(id)copyParseRules;
-(id)description;
-(id)init;
-(void)addPrivilege:(id)arg0 ;
-(void)write:(id)arg0 ;


@end


#endif