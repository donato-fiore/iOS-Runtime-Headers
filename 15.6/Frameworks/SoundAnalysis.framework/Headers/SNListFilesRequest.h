// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNLISTFILESREQUEST_H
#define SNLISTFILESREQUEST_H

@class NSString;
@protocol SNTaskCreating, SNRequest;

#import <Foundation/Foundation.h>

#import "SNFileServerInfo.h"

@interface SNListFilesRequest : NSObject <SNTaskCreating, SNRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *queryPath; // ivar: _queryPath
@property (retain, nonatomic) SNFileServerInfo *serverInfo; // ivar: _serverInfo
@property (readonly) Class superclass;


-(id)initWithServerInfo:(id)arg0 queryPath:(id)arg1 ;
-(id)launchTaskWithQueue:(SEL)arg0 completionHandler:(id)arg1 resultsHandler:(id)arg2 ;


@end


#endif