// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCNINTENDOJOYCONPROFILE_H
#define _GCNINTENDOJOYCONPROFILE_H

@class NSString;
@protocol _GCDefaultDeviceManagerDelegate, _GCControllerProfile;

#import <Foundation/Foundation.h>


@interface _GCNintendoJoyConProfile : NSObject <_GCDefaultDeviceManagerDelegate, _GCControllerProfile>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isLeftJoyCon) BOOL leftJoyCon; // ivar: _leftJoyCon
@property (readonly, getter=isRightJoyCon) BOOL rightJoyCon; // ivar: _rightJoyCon
@property (readonly) Class superclass;


+(id)deviceManager;


@end


#endif