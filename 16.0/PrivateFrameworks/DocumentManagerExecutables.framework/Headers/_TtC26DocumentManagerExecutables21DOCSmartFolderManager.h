// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC26DOCUMENTMANAGEREXECUTABLES21DOCSMARTFOLDERMANAGER_H
#define _TTC26DOCUMENTMANAGEREXECUTABLES21DOCSMARTFOLDERMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC26DocumentManagerExecutables21DOCSmartFolderManager : NSObject {
    ? _database;
    ? $__lazy_storage_$_database;
    ? currentUserActivity;
    ? defaultSaveLocationItemId;
    ? domainDisplayNameProvider;
}




+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)registerDomainDisplayNameProvider:(id)arg0 ;


@end


#endif