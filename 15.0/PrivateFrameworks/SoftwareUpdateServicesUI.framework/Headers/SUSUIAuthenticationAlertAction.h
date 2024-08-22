// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSUIAUTHENTICATIONALERTACTION_H
#define SUSUIAUTHENTICATIONALERTACTION_H

@class BSAction, SUDownload, SUAutoInstallOperation;



@interface SUSUIAuthenticationAlertAction : BSAction {
    BOOL _loaded;
    SUDownload *_download;
    SUAutoInstallOperation *_autoInstallOperation;
    BOOL _forInstallTonight;
    BOOL _canDeferInstallation;
}


@property (readonly, retain, nonatomic) SUAutoInstallOperation *autoInstallOperation;
@property (readonly, nonatomic) BOOL canDeferInstallation;
@property (readonly, retain, nonatomic) SUDownload *download;
@property (readonly, nonatomic) BOOL forInstallTonight;


-(id)initWithDownload:(id)arg0 autoInstallOperation:(id)arg1 forInstallTonight:(BOOL)arg2 canDeferInstallation:(BOOL)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5 ;
-(void)_loadIfNecessary;
-(void)fireCompletionIfNecessaryForResult:(BOOL)arg0 ;


@end


#endif