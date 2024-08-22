// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MSREMOTEVIEWCONTROLLER_H
#define _MSREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol MSViewServiceHostProtocol;



@interface _MSRemoteViewController : UIRemoteViewController <MSViewServiceHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MSViewServiceHostProtocol> *host; // ivar: _host
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)requestDismiss;


@end


#endif