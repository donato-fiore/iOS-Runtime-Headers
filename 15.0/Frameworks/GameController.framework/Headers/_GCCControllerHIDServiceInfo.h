// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GCCCONTROLLERHIDSERVICEINFO_H
#define _GCCCONTROLLERHIDSERVICEINFO_H

@class NSData, NSString, NSNumber;
@protocol _GCImplicitIPCObject, NSCopying, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GCCControllerHIDServiceInfo : NSObject <_GCImplicitIPCObject, NSCopying>

 {
    NSData *_inputData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier;
@property (retain, nonatomic) NSData *inputData;
@property (readonly, nonatomic) NSNumber *registryID; // ivar: _registryID
@property (readonly, nonatomic) *__IOHIDServiceClient service; // ivar: _service
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHIDServiceInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithService:(struct __IOHIDServiceClient *)arg0 ;
-(id)name;
-(id)redactedDescription;
-(void)dealloc;


@end


#endif