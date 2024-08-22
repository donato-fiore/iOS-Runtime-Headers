// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYNOTESACTIVATIONCOMMAND_H
#define SYNOTESACTIVATIONCOMMAND_H


#import <Foundation/Foundation.h>


@interface SYNotesActivationCommand : NSObject



+(void)_activateWithDomainIdentifier:(id)arg0 noteIdentifier:(id)arg1 completion:(id)arg2 ;
+(void)_activateWithMetaActivity:(id)arg0 completion:(id)arg1 ;
+(void)activateWithDomainIdentifier:(id)arg0 noteIdentifier:(id)arg1 completion:(id)arg2 ;
+(void)activateWithMetaActivity:(id)arg0 completion:(id)arg1 ;
+(void)activateWithNoteIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif