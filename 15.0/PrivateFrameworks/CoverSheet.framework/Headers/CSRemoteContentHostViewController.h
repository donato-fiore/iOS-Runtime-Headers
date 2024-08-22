// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSREMOTECONTENTHOSTVIEWCONTROLLER_H
#define CSREMOTECONTENTHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, SBSRemoteContentPreferences, SBSRemoteContentDefinition;
@protocol SBSRemoteContentHostInterface, CSRemoteContentHostDelegate;



@interface CSRemoteContentHostViewController : UIRemoteViewController <SBSRemoteContentHostInterface>

 {
    SBSRemoteContentPreferences *_contentPreferences;
}


@property (retain, nonatomic) SBSRemoteContentDefinition *definition; // ivar: _definition
@property (weak, nonatomic) NSObject<CSRemoteContentHostDelegate> *delegate; // ivar: _delegate


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(id)contentPreferences;
-(struct CGRect )_customContentBounds;
-(void)_fetchContentPreferences;
-(void)_updateContentPreferences:(id)arg0 ;
-(void)configureWithDefinition:(id)arg0 ;
-(void)didChangeStyle;
-(void)didDismissForDismissType:(NSInteger)arg0 ;
-(void)getContentBoundsWithReplyBlock:(id)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif