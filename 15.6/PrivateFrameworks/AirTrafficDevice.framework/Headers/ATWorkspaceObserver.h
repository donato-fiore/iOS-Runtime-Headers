// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATWORKSPACEOBSERVER_H
#define ATWORKSPACEOBSERVER_H

@class LSApplicationWorkspaceObserver;
@protocol LSApplicationWorkspaceObserverProtocol, ATWorkspaceObserverDelegate;



@interface ATWorkspaceObserver : LSApplicationWorkspaceObserver {
    NSObject<LSApplicationWorkspaceObserverProtocol> *_delegate;
}


@property (nonatomic) NSObject<ATWorkspaceObserverDelegate> *delegate;


-(void)applicationInstallsArePrioritized:(id)arg0 arePaused:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg0 ;
-(void)applicationInstallsDidChange:(id)arg0 ;
-(void)applicationInstallsDidPrioritize:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)startObserving;
-(void)stopObserving;


@end


#endif