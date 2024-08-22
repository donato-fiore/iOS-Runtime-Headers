// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDPHOSTVIEWCONTROLLER_H
#define _CDPHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, NSExtension;
@protocol CDPHostInterface, NSCopying;



@interface _CDPHostViewController : UIRemoteViewController <CDPHostInterface>



@property (retain, nonatomic) NSObject<NSCopying> *request; // ivar: _request
@property (copy, nonatomic) id *viewServiceTerminationBlock; // ivar: _viewServiceTerminationBlock
@property (weak, nonatomic) NSExtension *weakExtension; // ivar: _weakExtension


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(CGFloat)_keyboardHeightOffset;
-(void)dealloc;
-(void)hostKeyboardOffset:(id)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif