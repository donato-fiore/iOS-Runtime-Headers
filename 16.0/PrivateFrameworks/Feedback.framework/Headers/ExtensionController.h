// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXTENSIONCONTROLLER_H
#define EXTENSIONCONTROLLER_H

@class EXExtensionViewController;



@interface ExtensionController : EXExtensionViewController {
    ? xpcConnection;
    ? contentViewController;
}




-(BOOL)shouldAcceptXPCConnection:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;


@end


#endif