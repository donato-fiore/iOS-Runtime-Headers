// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SVDMUTABLEDEVICEUNIT_H
#define _SVDMUTABLEDEVICEUNIT_H

@class NSString;
@protocol SVDDeviceUnitMutating;

#import <Foundation/Foundation.h>


@interface _SVDMutableDeviceUnit : NSObject <SVDDeviceUnitMutating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *homeKitAccessoryIdentifier; // ivar: _homeKitAccessoryIdentifier
@property (nonatomic) BOOL isCommunalDevice; // ivar: _isCommunalDevice
@property (copy, nonatomic) NSString *mediaRouteIdentifier; // ivar: _mediaRouteIdentifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger proximity; // ivar: _proximity
@property (copy, nonatomic) NSString *roomName; // ivar: _roomName
@property (readonly) Class superclass;




@end


#endif