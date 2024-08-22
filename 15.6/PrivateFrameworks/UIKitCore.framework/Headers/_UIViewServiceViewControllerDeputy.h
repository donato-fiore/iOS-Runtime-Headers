// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIEWSERVICEVIEWCONTROLLERDEPUTY_H
#define _UIVIEWSERVICEVIEWCONTROLLERDEPUTY_H

@class UITargetedProxy, NSString;
@protocol _UIViewServiceDeputy;



@interface _UIViewServiceViewControllerDeputy : UITargetedProxy <_UIViewServiceDeputy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)XPCInterface;
+(id)deputyWithViewController:(id)arg0 ;
-(id)invalidate;
-(void)__prepareForDisconnectionWithCompletionHandler:(id)arg0 ;


@end


#endif