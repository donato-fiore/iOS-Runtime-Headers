// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSMUTABLEHIDEVENTSENDERDESCRIPTOR_H
#define BKSMUTABLEHIDEVENTSENDERDESCRIPTOR_H



#import "BKSHIDEventSenderDescriptor.h"
#import "BKSHIDEventDisplay.h"

@interface BKSMutableHIDEventSenderDescriptor : BKSHIDEventSenderDescriptor

@property (copy, nonatomic) BKSHIDEventDisplay *associatedDisplay;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (nonatomic) NSInteger hardwareType;
@property (nonatomic) NSUInteger senderID;


+(id)new;
-(id)init;
-(void)setPrimaryPage:(unsigned int)arg0 primaryUsage:(unsigned int)arg1 ;


@end


#endif