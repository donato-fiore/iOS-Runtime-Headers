// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVMKCOLRESPONSEITEM_H
#define COREDAVMKCOLRESPONSEITEM_H

@class NSMutableSet;


#import "CoreDAVItem.h"

@interface CoreDAVMkcolResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *propStats; // ivar: _propStats


+(id)copyParseRules;
-(BOOL)hasPropertyError;
-(id)description;
-(id)init;
-(void)addPropStat:(id)arg0 ;


@end


#endif