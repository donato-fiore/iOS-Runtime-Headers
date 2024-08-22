// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLWEAKREFERENCEOBJECT_H
#define TMLWEAKREFERENCEOBJECT_H


#import <Foundation/Foundation.h>


@interface TMLWeakReferenceObject : NSObject

@property (readonly, weak, nonatomic) id *object; // ivar: _object


+(id)weakReferenceWithObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithObject:(id)arg0 ;


@end


#endif