// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSKEYEDUNARCHIVER_H
#define MPSKEYEDUNARCHIVER_H

@class NSKeyedUnarchiver;
@protocol MPSDeviceProvider, MTLDevice;



@interface MPSKeyedUnarchiver : NSKeyedUnarchiver <MPSDeviceProvider>

 {
    id<MTLDevice> *_device;
}




+(id)unarchiveObjectWithData:(id)arg0 device:(id)arg1 ;
+(id)unarchiveObjectWithFile:(id)arg0 device:(id)arg1 ;
+(id)unarchiveTopLevelObjectWithData:(id)arg0 device:(id)arg1 error:(*id)arg2 ;
+(id)unarchivedObjectOfClass:(Class)arg0 fromData:(id)arg1 device:(id)arg2 error:(*id)arg3 ;
+(id)unarchivedObjectOfClasses:(id)arg0 fromData:(id)arg1 device:(id)arg2 error:(*id)arg3 ;
-(id)initForReadingFromData:(id)arg0 device:(id)arg1 error:(*id)arg2 ;
-(id)initForReadingWithData:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)mpsMTLDevice;
-(void)dealloc;


@end


#endif