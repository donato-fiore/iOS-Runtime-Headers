// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IKDOMNODEEVENTLISTENER_H
#define _IKDOMNODEEVENTLISTENER_H

@class JSManagedValue;

#import <Foundation/Foundation.h>


@interface _IKDOMNodeEventListener : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) JSManagedValue *managedValue; // ivar: _managedValue


-(id)initWithListener:(id)arg0 forNode:(id)arg1 ;
-(id)value;


@end


#endif