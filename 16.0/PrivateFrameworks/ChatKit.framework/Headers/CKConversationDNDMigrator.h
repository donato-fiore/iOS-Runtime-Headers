// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCONVERSATIONDNDMIGRATOR_H
#define CKCONVERSATIONDNDMIGRATOR_H


#import <Foundation/Foundation.h>


@interface CKConversationDNDMigrator : NSObject



-(id)_dnd_deprecated_globalIdentifierForChat:(id)arg0 ;
-(void)migrateDNDInfoIfNeeded;
-(void)performDNDMigrationIfNecessary;


@end


#endif