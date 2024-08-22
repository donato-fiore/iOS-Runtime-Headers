// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMGROUPBLOCKLISTMANAGER_H
#define IMGROUPBLOCKLISTMANAGER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface IMGroupBlocklistManager : NSObject

@property (retain) NSDate *lastModifiedDate; // ivar: _lastModifiedDate


+(id)groupsBlocklistFilename;
+(id)sharedInstance;
-(BOOL)hasFileChanged;
-(BOOL)isFeatureDisabled;
-(BOOL)isGroupInBlocklist:(id)arg0 ;
-(id)init;
-(id)initFromFile:(id)arg0 ;
-(void)_updateLastModifiedDate:(id)arg0 ;
-(void)blocklistGroupId:(id)arg0 ;
-(void)loadData;
-(void)loadFromFile:(id)arg0 ;
-(void)reloadIfNeeded;
-(void)save;


@end


#endif