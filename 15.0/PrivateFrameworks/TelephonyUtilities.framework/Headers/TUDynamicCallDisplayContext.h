// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUDYNAMICCALLDISPLAYCONTEXT_H
#define TUDYNAMICCALLDISPLAYCONTEXT_H

@class CXCallDirectoryManager;
@protocol TUDynamicCallDisplayContextDelegate, OS_dispatch_queue;


#import "TUMutableCallDisplayContext.h"

@interface TUDynamicCallDisplayContext : TUMutableCallDisplayContext

@property (retain, nonatomic) CXCallDirectoryManager *callDirectoryManager; // ivar: _callDirectoryManager
@property (weak, nonatomic) NSObject<TUDynamicCallDisplayContextDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(id)description;
-(id)init;
-(id)initWithCall:(id)arg0 contactIdentifier:(id)arg1 serialQueue:(id)arg2 ;
-(id)initWithCall:(id)arg0 contactIdentifier:(id)arg1 serialQueue:(id)arg2 contactsDataSource:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayContext:(id)arg0 call:(id)arg1 serialQueue:(id)arg2 ;
-(void)_initializeAsynchronousStateWithCall:(id)arg0 ;
-(void)_initializeSynchronousStateWithCall:(id)arg0 contactIdentifier:(id)arg1 contactsDataProvider:(id)arg2 ;


@end


#endif