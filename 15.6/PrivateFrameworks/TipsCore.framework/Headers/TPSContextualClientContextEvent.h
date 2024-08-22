// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCONTEXTUALCLIENTCONTEXTEVENT_H
#define TPSCONTEXTUALCLIENTCONTEXTEVENT_H

@class NSArray;


#import "TPSContextualEvent.h"

@interface TPSContextualClientContextEvent : TPSContextualEvent

@property (copy, nonatomic) NSArray *conditions; // ivar: _conditions


+(BOOL)supportsSecureCoding;
-(id)clientContextKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif