// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATREMOTEFILEMANAGERLINKHANDLER_H
#define ATREMOTEFILEMANAGERLINKHANDLER_H

@class NSFileManager, NSString;
@protocol ATMessageLinkRequestHandler;

#import <Foundation/Foundation.h>


@interface ATRemoteFileManagerLinkHandler : NSObject <ATMessageLinkRequestHandler>

 {
    NSFileManager *_fm;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *rootPath; // ivar: _rootPath
@property (readonly) Class superclass;


-(id)_copyItems:(id)arg0 ;
-(id)_createDirectory:(id)arg0 ;
-(id)_directoryContents:(id)arg0 ;
-(id)_downloadFile:(id)arg0 ;
-(id)_freeSpace:(id)arg0 ;
-(id)_moveItems:(id)arg0 ;
-(id)_path:(id)arg0 ;
-(id)_progress:(id)arg0 ;
-(id)_removeItems:(id)arg0 ;
-(id)_uploadFile:(id)arg0 ;
-(id)_usage:(id)arg0 ;
-(id)initWithRootPath:(id)arg0 ;
-(void)messageLink:(id)arg0 didReceiveRequest:(id)arg1 ;


@end


#endif