// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAFOLDERSYNCREQUEST_H
#define DAFOLDERSYNCREQUEST_H

@class NSArray, DAFolder;

#import <Foundation/Foundation.h>


@interface DAFolderSyncRequest : NSObject

@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic) BOOL containsPostponedActions; // ivar: _containsPostponedActions
@property (retain, nonatomic) DAFolder *folder; // ivar: _folder
@property (nonatomic) BOOL hasRemoteChanges; // ivar: _hasRemoteChanges
@property (nonatomic) BOOL isInitialUberSync; // ivar: _isInitialUberSync
@property (nonatomic) BOOL isResyncAfterConnectionFailed; // ivar: _isResyncAfterConnectionFailed
@property (nonatomic) BOOL isResyncAfterServerError; // ivar: _isResyncAfterServerError


-(id)description;
-(id)initWithFolder:(id)arg0 hasRemoteChanges:(BOOL)arg1 isInitialUberSync:(BOOL)arg2 ;


@end


#endif