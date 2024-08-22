// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCDEVICEPHYSICALINPUTCOMPONENTDESCRIPTION_H
#define _GCDEVICEPHYSICALINPUTCOMPONENTDESCRIPTION_H

@class NSArray, NSString;
@protocol _GCControllerComponentDescription, _GCUpdatableIPCObjectDescription, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCPhysicalInputProfile.h"

@interface _GCDevicePhysicalInputComponentDescription : NSObject <_GCControllerComponentDescription, _GCUpdatableIPCObjectDescription>

 {
    NSArray *_bindingDescriptions;
    GCPhysicalInputProfile *_materializedInputProfile;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *elementDescriptions; // ivar: _elementDescriptions
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)update:(id)arg0 withContext:(id)arg1 ;
-(id)createWithContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 elements:(id)arg1 bindings:(id)arg2 ;
-(id)materializeWithContext:(id)arg0 ;
-(void)_applyBinding:(id)arg0 toComponent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif