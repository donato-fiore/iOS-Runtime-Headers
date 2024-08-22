// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKHIDUNKNOWNSENDER_H
#define BKHIDUNKNOWNSENDER_H

@class NSString, BKSHIDEventSenderDescriptor;
@protocol BKHIDEventSenderInfo;

#import <Foundation/Foundation.h>


@interface BKHIDUnknownSender : NSObject <BKHIDEventSenderInfo>



@property (nonatomic, getter=isAuthenticated) BOOL authenticated; // ivar: _authenticated
@property (nonatomic, getter=isBuiltIn) BOOL builtIn; // ivar: _builtIn
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayUUID; // ivar: _displayUUID
@property (nonatomic) int eventSource; // ivar: _eventSource
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int primaryUsage; // ivar: _primaryUsage
@property (nonatomic) unsigned int primaryUsagePage; // ivar: _primaryUsagePage
@property (copy, nonatomic) BKSHIDEventSenderDescriptor *senderDescriptor; // ivar: _senderDescriptor
@property (nonatomic) NSUInteger senderID; // ivar: _senderID
@property (readonly) Class superclass;


+(id)unknownSenderInfo;
-(id)init;
-(id)senderDescriptorForEventType:(unsigned int)arg0 ;


@end


#endif