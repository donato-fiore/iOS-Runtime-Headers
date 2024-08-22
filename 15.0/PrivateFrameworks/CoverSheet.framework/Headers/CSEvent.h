// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSEVENT_H
#define CSEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CSEvent : NSObject

@property (nonatomic, getter=isConsumable) BOOL consumable; // ivar: _consumable
@property (nonatomic, getter=isStateless) BOOL stateless; // ivar: _stateless
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSNumber *value; // ivar: _value


+(id)eventWithType:(NSInteger)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif