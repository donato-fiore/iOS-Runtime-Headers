// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMFILESERVER_H
#define BMFILESERVER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, BMFileServer;

#import <Foundation/Foundation.h>

#import "BMFileManager.h"

@interface BMFileServer : NSObject <NSXPCListenerDelegate, BMFileServer>

 {
    NSXPCListener *_listener;
    NSString *_directory;
    BMFileManager *_fileManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)entitledToAccessClientCompute:(id)arg0 error:(*id)arg1 ;
-(BOOL)entitledToAccessStream:(id)arg0 withMode:(int)arg1 error:(*id)arg2 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_initWithListener:(id)arg0 directory:(id)arg1 ;
-(id)initWithDirectory:(id)arg0 ;
-(void)_configureConnection:(id)arg0 ;
-(void)createDirectoryAtPath:(id)arg0 reply:(id)arg1 ;
-(void)fileHandleForFileAtPath:(id)arg0 flags:(int)arg1 protection:(int)arg2 reply:(id)arg3 ;
-(void)removeDirectoryAtPath:(id)arg0 reply:(id)arg1 ;
-(void)removeFileAtPath:(id)arg0 reply:(id)arg1 ;
-(void)replaceFileAtPath:(id)arg0 withFileHandle:(id)arg1 reply:(id)arg2 ;
-(void)sharedMemoryForFileAtPath:(id)arg0 flags:(int)arg1 reply:(id)arg2 ;
-(void)temporaryFileHandleWithProtection:(int)arg0 reply:(id)arg1 ;


@end


#endif