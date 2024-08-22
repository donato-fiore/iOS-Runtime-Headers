// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCCONTROLLERCOMPONENTDESCRIPTION_H
#define _GCCONTROLLERCOMPONENTDESCRIPTION_H

@class NSArray, NSString;
@protocol _GCControllerComponentDescription, _GCUpdatableIPCObjectDescription, GCControllerComponent><NSSecureCoding, GCControllerComponent, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GCControllerComponentDescription : NSObject <_GCControllerComponentDescription, _GCUpdatableIPCObjectDescription>

 {
    id<GCControllerComponent><NSSecureCoding> *_component;
    NSArray *_bindingDescriptions;
    id<GCControllerComponent> *_materializedComponent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)update:(id)arg0 withContext:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComponent:(id)arg0 ;
-(id)initWithComponent:(id)arg0 bindings:(id)arg1 ;
-(id)materializeWithContext:(id)arg0 ;
-(id)redactedDescription;
-(void)_applyBinding:(id)arg0 toComponent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif