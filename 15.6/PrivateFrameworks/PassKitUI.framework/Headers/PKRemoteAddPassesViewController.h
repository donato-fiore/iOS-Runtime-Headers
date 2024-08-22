// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKREMOTEADDPASSESVIEWCONTROLLER_H
#define PKREMOTEADDPASSESVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol PKRemoteAddPassesViewControllerProtocol, PKAddPassesViewControllerDelegate;



@interface PKRemoteAddPassesViewController : UIRemoteViewController <PKRemoteAddPassesViewControllerProtocol>

 {
    BOOL _finished;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAddPassesViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)dealloc;
-(void)ingestionDidFinishWithResult:(NSUInteger)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif