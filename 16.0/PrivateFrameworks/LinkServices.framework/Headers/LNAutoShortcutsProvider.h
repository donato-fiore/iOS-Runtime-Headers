// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNAUTOSHORTCUTSPROVIDER_H
#define LNAUTOSHORTCUTSPROVIDER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface LNAutoShortcutsProvider : NSObject {
    NSXPCConnection *_connection;
}




+(id)sharedInstance;
-(id)autoShortcutsForApplicationRecord:(id)arg0 localeIdentifier:(id)arg1 ;
-(id)autoShortcutsForLocaleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)autoShortcutsForBundleIdentifier:(id)arg0 localeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)autoShortcutsForLocaleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)retrieveActionForLocalizedPhrase:(id)arg0 completion:(id)arg1 ;


@end


#endif