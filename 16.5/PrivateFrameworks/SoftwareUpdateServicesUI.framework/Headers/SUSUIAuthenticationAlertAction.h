// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSUIAUTHENTICATIONALERTACTION_H
#define SUSUIAUTHENTICATIONALERTACTION_H

@class BSAction, SUDescriptor, SURollbackDescriptor, SUAutoInstallOperation;



@interface SUSUIAuthenticationAlertAction : BSAction {
    BOOL _loaded;
    SUDescriptor *_descriptor;
    SURollbackDescriptor *_rollbackDescriptor;
    SUAutoInstallOperation *_autoInstallOperation;
    BOOL _forInstallTonight;
    BOOL _canDeferInstallation;
    NSUInteger _alertType;
}


@property (readonly, nonatomic) NSUInteger alertType;
@property (readonly, retain, nonatomic) SUAutoInstallOperation *autoInstallOperation;
@property (retain, nonatomic) BSAction *baseAction; // ivar: _baseAction
@property (readonly, nonatomic) BOOL canDeferInstallation;
@property (readonly, retain, nonatomic) SUDescriptor *descriptor;
@property (readonly, nonatomic) BOOL forInstallTonight;
@property (readonly, retain, nonatomic) SURollbackDescriptor *rollbackDescriptor;


-(Class)fallbackXPCEncodableClass;
-(id)initWithDescriptor:(id)arg0 autoInstallOperation:(id)arg1 forInstallTonight:(BOOL)arg2 canDeferInstallation:(BOOL)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5 ;
-(id)initWithInfo:(id)arg0 forBaseAction:(id)arg1 ;
-(id)initWithRollbackDescriptor:(id)arg0 canDeferInstallation:(BOOL)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3 ;
-(void)_loadIfNecessary;
-(void)fireCompletionIfNecessaryForResult:(BOOL)arg0 ;


@end


#endif