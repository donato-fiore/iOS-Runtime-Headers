// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ARVIEWERREMOTEVIEWCONTROLLER_H
#define _ARVIEWERREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol ARViewerHostProtocol;



@interface _ARViewerRemoteViewController : UIRemoteViewController <ARViewerHostProtocol>



@property (retain) NSObject<ARViewerHostProtocol> *arviewerDelegate; // ivar: _arviewerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)isIgnoringInteractionEvents:(id)arg0 ;
-(void)setStatusBarOrientation:(NSInteger)arg0 ;
-(void)statusBarOrientation:(id)arg0 ;


@end


#endif