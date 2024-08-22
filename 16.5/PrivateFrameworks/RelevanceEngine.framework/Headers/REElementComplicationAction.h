// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REELEMENTCOMPLICATIONACTION_H
#define REELEMENTCOMPLICATIONACTION_H

@class NSString;


#import "REElementAction.h"

@interface REElementComplicationAction : REElementAction

@property (readonly, nonatomic) NSString *slotIdentifier; // ivar: _slotIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSlotIdentifier:(id)arg0 ;
-(void)_performWithContext:(id)arg0 ;


@end


#endif