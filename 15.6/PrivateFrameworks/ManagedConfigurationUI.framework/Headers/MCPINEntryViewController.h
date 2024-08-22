// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCPINENTRYVIEWCONTROLLER_H
#define MCPINENTRYVIEWCONTROLLER_H

@class DevicePINController, NSString;
@protocol UIAdaptivePresentationControllerDelegate, DevicePINControllerDelegate;



@interface MCPINEntryViewController : DevicePINController <UIAdaptivePresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DevicePINControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;


-(id)init;
-(id)stringsBundle;
-(id)stringsTable;
-(void)_updateStyle;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif