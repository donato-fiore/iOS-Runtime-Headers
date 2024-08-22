// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSREMOTECONTENTHOSTVIEWCONTROLLER_H
#define CSREMOTECONTENTHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, SBSRemoteContentPreferences, SBSRemoteContentDefinition;
@protocol SBSRemoteContentHostInterface, CSRemoteContentHostDelegate;



@interface CSRemoteContentHostViewController : UIRemoteViewController <SBSRemoteContentHostInterface>



@property (nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (retain, nonatomic) SBSRemoteContentPreferences *contentPreferences; // ivar: _contentPreferences
@property (retain, nonatomic) SBSRemoteContentDefinition *definition; // ivar: _definition
@property (weak, nonatomic) NSObject<CSRemoteContentHostDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGRect safeAreaForRemote;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(struct CGRect )_customContentBounds;
-(void)_fetchContentPreferences;
-(void)_fetchInlinePresentationContentFrame;
-(void)_updateContentFrame:(struct CGRect )arg0 ;
-(void)_updateContentPreferences:(id)arg0 ;
-(void)configureWithDefinition:(id)arg0 ;
-(void)didChangeStyle;
-(void)didDismissForDismissType:(NSInteger)arg0 ;
-(void)getContentBoundsWithReplyBlock:(id)arg0 ;
-(void)hostDidChangeContentBounds;
-(void)presentAlert:(id)arg0 replyBlock:(id)arg1 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif