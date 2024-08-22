// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNDELETEFILESREQUEST_H
#define SNDELETEFILESREQUEST_H

@class NSString, NSArray;
@protocol SNTaskCreating, SNRequest;

#import <Foundation/Foundation.h>

#import "SNFileServerInfo.h"

@interface SNDeleteFilesRequest : NSObject <SNTaskCreating, SNRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *files; // ivar: _files
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *serverBasePath; // ivar: _serverBasePath
@property (retain, nonatomic) SNFileServerInfo *serverInfo; // ivar: _serverInfo
@property (readonly) Class superclass;


-(id)initWithFiles:(id)arg0 serverBasePath:(id)arg1 serverInfo:(id)arg2 ;
-(id)launchTaskWithQueue:(SEL)arg0 completionHandler:(id)arg1 resultsHandler:(id)arg2 ;


@end


#endif