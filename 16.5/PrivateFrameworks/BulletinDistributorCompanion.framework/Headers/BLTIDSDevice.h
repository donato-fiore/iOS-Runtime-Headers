// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTIDSDEVICE_H
#define BLTIDSDEVICE_H

@class IDSDevice, NSString;
@protocol BLTAbstractIDSDevice;

#import <Foundation/Foundation.h>


@interface BLTIDSDevice : NSObject <BLTAbstractIDSDevice>

 {
    IDSDevice *_device;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCloudReachable;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isDefaultPairedDevice;
@property (readonly, nonatomic) BOOL isNearby;
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIDSDevice:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;


@end


#endif