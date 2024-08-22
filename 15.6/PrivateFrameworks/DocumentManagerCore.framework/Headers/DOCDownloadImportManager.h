// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCDOWNLOADIMPORTMANAGER_H
#define DOCDOWNLOADIMPORTMANAGER_H


#import <Foundation/Foundation.h>


@interface DOCDownloadImportManager : NSObject



-(id)_moveItemAtURLToDownloadsLocation:(id)arg0 error:(*id)arg1 ;
-(id)interface;
-(void)importPlaceholderAtURLToDownloadsDirectory:(id)arg0 completion:(id)arg1 ;
-(void)replacePlaceholder:(id)arg0 withFinalFileURL:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif