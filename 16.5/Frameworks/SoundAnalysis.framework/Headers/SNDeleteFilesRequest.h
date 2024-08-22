// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNDELETEFILESREQUEST_H
#define SNDELETEFILESREQUEST_H

@class NSArray, NSString;
@protocol SNTaskCreating, SNRequest;

#import <Foundation/Foundation.h>

#import "SNFileServerInfo.h"

@interface SNDeleteFilesRequest : NSObject <SNTaskCreating, SNRequest>

 {
    NSArray *_files;
    NSString *_serverBasePath;
    SNFileServerInfo *_serverInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFiles:(id)arg0 serverBasePath:(id)arg1 serverInfo:(id)arg2 ;
-(id)launchTaskWithQueue:(SEL)arg0 completionHandler:(id)arg1 resultsHandler:(id)arg2 ;


@end


#endif