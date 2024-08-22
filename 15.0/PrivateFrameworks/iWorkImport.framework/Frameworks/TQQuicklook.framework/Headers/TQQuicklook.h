// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TQQUICKLOOK_H
#define TQQUICKLOOK_H

@class NSString, TSACirrusDocument, TSABaseApplicationDelegate, TSUTemporaryDirectory, NSBundle;
@protocol TSUResourceFileURLProvider, TSKRenderingExporter;

#import <Foundation/Foundation.h>


@interface TQQuicklook : NSObject <TSUResourceFileURLProvider>

 {
    NSString *mPath;
    TSACirrusDocument *mDocument;
    TSABaseApplicationDelegate *mBaseAppDelegate;
    TSUTemporaryDirectory *mTemporaryDirectory;
    NSString *mPassphrase;
    id<TSKRenderingExporter> *mExporter;
    NSBundle *mInstalledGingerBundle;
    NSBundle *mInstalledSageBundle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)tsuColorFromColorArray:(id)arg0 ;
+(void)loadAssetColorMap;
+(void)unloadAssetColorMap;
-(BOOL)load;
-(BOOL)writePreviewToOutput:(id)arg0 pageNumber:(NSUInteger)arg1 ;
-(Class)appDelegateClass;
-(NSUInteger)pageCount;
-(id)fileURLForResourceInfo:(id)arg0 ;
-(id)initWithPath:(id)arg0 passphrase:(id)arg1 ;
-(id)newPDFForPageNumber:(NSUInteger)arg0 ;
-(id)newPDFPreviewAndClose;
-(id)sheetNameForPageNumber:(NSUInteger)arg0 isForm:(*BOOL)arg1 ;
-(id)thumbnail;
-(struct __CFString *)getIdentifierForApp:(id)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif