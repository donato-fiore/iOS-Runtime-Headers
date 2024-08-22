// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCSYNTHETICCONTROLLERDESCRIPTION_H
#define _GCSYNTHETICCONTROLLERDESCRIPTION_H

@class NSString;
@protocol _GCSyntheticDeviceDescription, NSCopying><NSObject><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GCSyntheticControllerDescription : NSObject <_GCSyntheticDeviceDescription>



@property (readonly) NSObject<NSCopying><NSObject><NSSecureCoding> *controllerIdentifier; // ivar: _controllerIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDescription:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 controllerIdentifier:(id)arg1 ;


@end


#endif