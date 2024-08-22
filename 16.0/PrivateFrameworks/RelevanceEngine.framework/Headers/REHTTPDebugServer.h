// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REHTTPDEBUGSERVER_H
#define REHTTPDEBUGSERVER_H

@class NSArray, NSString;
@protocol REHTTPServerDelegate, REHTTPDebugServerDataSource;

#import <Foundation/Foundation.h>

#import "REHTTPServer.h"
#import "REHTMLPageBuilder.h"
#import "REHTTPFileCache.h"

@interface REHTTPDebugServer : NSObject <REHTTPServerDelegate>

 {
    REHTTPServer *_server;
    REHTMLPageBuilder *_pageBuilder;
    REHTTPFileCache *_cache;
    ? _dataSourceCallbacks;
}


@property (retain) NSArray *availableEngines; // ivar: _availableEngines
@property (readonly, weak, nonatomic) NSObject<REHTTPDebugServerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) unsigned short port;
@property (retain) NSString *processName; // ivar: _processName


-(BOOL)_isReservedFilePath:(id)arg0 ;
-(SEL)_serverMethod:(id)arg0 ;
-(id)_aboutPage;
-(id)_create404Element;
-(id)_createContentItemWithTitle:(id)arg0 content:(id)arg1 ;
-(id)_engineList;
-(id)_enginesPage;
-(id)_landPageFileName;
-(id)_landingPage;
-(id)_pageMap;
-(id)_pageTitle;
-(id)_radarLinkWithTitle:(id)arg0 ;
-(id)initWithPort:(unsigned short)arg0 dataSource:(id)arg1 ;
-(void)_availableEngineInstancesForProcess:(id)arg0 completion:(id)arg1 ;
-(void)_handleFileRequest:(id)arg0 completion:(id)arg1 ;
-(void)_loadAvailableEngines:(id)arg0 ;
-(void)_loadEngineListWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)_loadPageForReservedPath:(id)arg0 completion:(id)arg1 ;
-(void)httpServer:(id)arg0 handleRequest:(id)arg1 completion:(id)arg2 ;


@end


#endif