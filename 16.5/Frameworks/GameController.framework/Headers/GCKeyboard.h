// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCKEYBOARD_H
#define GCKEYBOARD_H

@class NSString;
@protocol GCDevice, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GCKeyboardInput.h"
#import "GCPhysicalInputProfile.h"

@interface GCKeyboard : NSObject <GCDevice>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // ivar: _handlerQueue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GCKeyboardInput *keyboardInput; // ivar: _keyboardInput
@property (readonly, nonatomic) GCPhysicalInputProfile *physicalInputProfile;
@property (readonly, nonatomic) NSString *productCategory;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *vendorName;


+(id)coalescedKeyboard;
-(id)init;


@end


#endif