// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STWEBREMOTEVIEWCONTROLLER_H
#define STWEBREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol STWebServiceDelegate;



@interface STWebRemoteViewController : UIRemoteViewController <STWebServiceDelegate>



@property BOOL URLIsBlocked; // ivar: _URLIsBlocked
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)instantiateWebViewControllerWithConnectionHandler:(id)arg0 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;


@end


#endif