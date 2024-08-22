// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNCOPYFILESREQUEST_H
#define SNCOPYFILESREQUEST_H

@class NSString, NSArray;
@protocol SNTaskCreating, SNRequest;

#import <Foundation/Foundation.h>

#import "SNFileServerInfo.h"

@interface SNCopyFilesRequest : NSObject <SNTaskCreating, SNRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *localDestinationPath; // ivar: _localDestinationPath
@property (retain, nonatomic) NSString *serverBasePath; // ivar: _serverBasePath
@property (retain, nonatomic) NSArray *serverFilePaths; // ivar: _serverFilePaths
@property (retain, nonatomic) SNFileServerInfo *serverInfo; // ivar: _serverInfo
@property (readonly) Class superclass;


-(id)initWithServerInfo:(id)arg0 serverBasePath:(id)arg1 serverFilePaths:(id)arg2 localDestinationPath:(id)arg3 ;
-(id)launchTaskWithQueue:(SEL)arg0 completionHandler:(id)arg1 resultsHandler:(id)arg2 ;


@end


#endif