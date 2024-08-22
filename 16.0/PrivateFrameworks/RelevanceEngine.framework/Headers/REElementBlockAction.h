// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REELEMENTBLOCKACTION_H
#define REELEMENTBLOCKACTION_H



#import "REElementAction.h"

@interface REElementBlockAction : REElementAction

@property (readonly, nonatomic) id *action; // ivar: _action


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAction:(id)arg0 ;
-(void)_performWithContext:(id)arg0 ;


@end


#endif