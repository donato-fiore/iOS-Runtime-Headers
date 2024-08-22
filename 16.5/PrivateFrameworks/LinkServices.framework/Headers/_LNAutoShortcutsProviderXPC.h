// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LNAUTOSHORTCUTSPROVIDERXPC_H
#define _LNAUTOSHORTCUTSPROVIDERXPC_H

@class NSXPCConnection, NSString;
@protocol LNAutoShortcutsProviderInterface;

#import <Foundation/Foundation.h>


@interface _LNAutoShortcutsProviderXPC : NSObject <LNAutoShortcutsProviderInterface>

 {
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)autoShortcutsForLocaleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithConnection:(id)arg0 ;
-(void)autoShortcutsForBundleIdentifier:(id)arg0 localeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)autoShortcutsForLocaleIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif