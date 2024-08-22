// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNLISTFILESREQUEST_H
#define SNLISTFILESREQUEST_H

@class NSString;
@protocol SNTaskCreating, SNRequest;

#import <Foundation/Foundation.h>

#import "SNFileServerInfo.h"

@interface SNListFilesRequest : NSObject <SNTaskCreating, SNRequest>

 {
    SNFileServerInfo *_serverInfo;
    NSString *_queryPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithServerInfo:(id)arg0 queryPath:(id)arg1 ;
-(id)launchTaskWithQueue:(SEL)arg0 completionHandler:(id)arg1 resultsHandler:(id)arg2 ;


@end


#endif