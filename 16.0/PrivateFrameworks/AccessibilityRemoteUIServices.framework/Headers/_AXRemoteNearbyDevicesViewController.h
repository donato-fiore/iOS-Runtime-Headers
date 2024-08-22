// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AXREMOTENEARBYDEVICESVIEWCONTROLLER_H
#define _AXREMOTENEARBYDEVICESVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol AXRemoteViewServiceExportedInterface;



@interface _AXRemoteNearbyDevicesViewController : UIRemoteViewController <AXRemoteViewServiceExportedInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
// +(id)presentNearbyDevicesViewControllerWithConnectionHandler:(id)arg0 dismissalHandler:(unk)arg1  ;
+(id)serviceViewControllerInterface;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif