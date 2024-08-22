// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIAPPSCRIPTDOWNLOADMANAGER_H
#define VUIAPPSCRIPTDOWNLOADMANAGER_H

@class NSURLSession, NSMutableDictionary, NSURL, NSURLSessionDataTask;

#import <Foundation/Foundation.h>


@interface VUIAppScriptDownloadManager : NSObject {
    NSURLSession *_session;
    NSMutableDictionary *_completionBlocksDict;
}


@property (retain, nonatomic) NSMutableDictionary *appScriptDict; // ivar: _appScriptDict
@property (retain, nonatomic) NSURL *currentURL; // ivar: _currentURL
@property (retain, nonatomic) NSURLSessionDataTask *task; // ivar: _task


+(id)sharedInstance;
-(id)_init;
-(void)fetchAppJavascript:(id)arg0 cachePolicy:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif