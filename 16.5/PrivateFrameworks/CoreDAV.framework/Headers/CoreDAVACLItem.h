// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVACLITEM_H
#define COREDAVACLITEM_H

@class NSMutableSet;


#import "CoreDAVItem.h"

@interface CoreDAVACLItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *accessControlEntities; // ivar: _accessControlEntities


+(id)copyParseRules;
-(id)description;
-(id)init;
-(id)liveACEs;
-(id)notGrantedSubsetOfACEs:(id)arg0 ;
-(void)addACE:(id)arg0 ;


@end


#endif