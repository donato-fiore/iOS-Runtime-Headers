// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCDATABASEBACKUPMANAGER_H
#define BRCDATABASEBACKUPMANAGER_H

@class NSURL, NSArray;

#import <Foundation/Foundation.h>


@interface BRCDatabaseBackupManager : NSObject

@property (readonly, nonatomic) NSURL *databaseURL;
@property (retain, nonatomic) NSURL *destinationDirectory; // ivar: _destinationDirectory
@property (retain, nonatomic) NSURL *outputUserURL; // ivar: _outputUserURL
@property (readonly, nonatomic) NSArray *urlPropertiesToFetch;
@property (retain, nonatomic) NSURL *userURL; // ivar: _userURL


// -(BOOL)enumerateRootURL:(id)arg0 usingBlock:(id)arg1 error:(unk)arg2  ;
// -(BOOL)enumerateURL:(id)arg0 rootURL:(id)arg1 usingBlock:(id)arg2 error:(unk)arg3  ;
-(id)desiredBackupDataDirectoryForUserURL:(id)arg0 ;
-(id)initWithUserURL:(id)arg0 outputUserURL:(id)arg1 ;
-(void)backUpWithCompletionBlock:(id)arg0 ;
-(void)cleanOnDisk;


@end


#endif