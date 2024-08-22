// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ARVIEWERVIEWCONTROLLER_H
#define _ARVIEWERVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol ARViewerVendorProtocol;



@interface _ARViewerViewController : UIViewController <ARViewerVendorProtocol>



@property (retain) NSObject<ARViewerVendorProtocol> *arviewerDelegate; // ivar: _arviewerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(BOOL)isIgnoringInteractionEvents;
-(NSInteger)statusBarOrientation;
-(void)setStatusBarOrientation:(NSInteger)arg0 ;


@end


#endif