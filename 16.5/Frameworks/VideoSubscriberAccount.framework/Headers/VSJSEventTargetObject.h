// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSJSEVENTTARGETOBJECT_H
#define VSJSEVENTTARGETOBJECT_H

@class NSMutableDictionary;
@protocol VSJSEventTargetObject;


#import "VSJSObject.h"

@interface VSJSEventTargetObject : VSJSObject <VSJSEventTargetObject>



@property (retain, nonatomic) NSMutableDictionary *listeners; // ivar: _listeners


-(NSUInteger)_indexForListener:(id)arg0 withEventType:(id)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(void)addEventListener:(id)arg0 ;
-(void)dispatchEvent:(id)arg0 withInfo:(id)arg1 ;
-(void)removeEventListener:(id)arg0 ;


@end


#endif