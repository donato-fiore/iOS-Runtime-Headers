// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCCCONTROLLERMANAGERDESCRIPTION_H
#define _GCCCONTROLLERMANAGERDESCRIPTION_H

@class GCImplicitIPCObjectDescription, NSString;
@protocol _GCHIDEventSourceDescription;



@interface _GCCControllerManagerDescription : GCImplicitIPCObjectDescription <_GCHIDEventSourceDescription>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithControllerManager:(id)arg0 ;
-(id)materializeWithContext:(id)arg0 ;


@end


#endif