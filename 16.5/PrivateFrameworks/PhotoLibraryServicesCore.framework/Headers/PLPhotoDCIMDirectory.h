// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPHOTODCIMDIRECTORY_H
#define PLPHOTODCIMDIRECTORY_H

@class NSString, NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLPhotoDCIMDirectory : NSObject {
    NSString *_dcimPath;
    NSString *_miscPath;
    NSString *_posterImagePath;
    NSMutableArray *_topLevelDirectories;
    *__CFDictionary _topLevelDirectoriesByNumber;
    *__CFSet _unusableTopLevelDirectoryNumbers;
    int _lastUsedDirectoryNumber;
    NSMutableDictionary *_userInfo;
    BOOL _userInfoDidChange;
    *flock _dcimDirectoryLock;
    int _dcimDirectoryLockDescriptor;
}




-(BOOL)hasChangedExternally;
-(id)_userInfoPath;
-(id)dcfDirectories;
-(id)dcimPath;
-(id)initWithDCIMPath:(id)arg0 ;
-(id)miscPath;
-(id)nextAvailableDirectory;
-(id)posterImagePath;
-(id)userInfo;
-(id)userInfoObjectForKey:(id)arg0 ;
-(void)clearDCFDirectories;
-(void)dealloc;
-(void)lockDirectory;
-(void)recreateInfoPlist;
-(void)reloadUserInfo;
-(void)saveUserInfo;
-(void)setHasChangedExternally:(BOOL)arg0 ;
-(void)setUserInfoObject:(id)arg0 forKey:(id)arg1 ;
-(void)unlockDirectory;


@end


#endif