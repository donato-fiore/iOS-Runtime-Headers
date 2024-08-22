// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCKDATABASEMANAGER_H
#define IMDCKDATABASEMANAGER_H

@class CKContainer;

#import <Foundation/Foundation.h>


@interface IMDCKDatabaseManager : NSObject

@property (readonly, nonatomic) CKContainer *manateeContainer; // ivar: _manateeContainer
@property (readonly, nonatomic) CKContainer *nickNameContainer; // ivar: _nickNameContainer
@property (readonly, nonatomic) CKContainer *truthContainer;


+(id)sharedInstance;
-(BOOL)_serverSaysToUseOldContainer;
-(id)init;
-(id)manateeDataBase;
-(id)nickNamePublicDatabase;
-(id)truthDatabase;
-(id)truthPublicDatabase;
-(void)dealloc;
-(void)fetchCurrentUserForNicknameContainer:(id)arg0 ;


@end


#endif