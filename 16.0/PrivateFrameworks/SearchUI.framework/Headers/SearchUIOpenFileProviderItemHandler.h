// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIOPENFILEPROVIDERITEMHANDLER_H
#define SEARCHUIOPENFILEPROVIDERITEMHANDLER_H

@class NSURL;
@protocol QLPreviewControllerDataSource;


#import "SearchUICommandHandler.h"

@interface SearchUIOpenFileProviderItemHandler : SearchUICommandHandler <QLPreviewControllerDataSource>



@property (retain) NSURL *fileProviderURL; // ivar: _fileProviderURL


+(id)fallbackCommandForRowModel:(id)arg0 environment:(id)arg1 ;
-(BOOL)openFileURLInPlaceInDefaultApplicationIfPossible:(id)arg0 ;
-(BOOL)supportsCopy;
-(BOOL)supportsShare;
-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(id)createViewControllerForCommand:(id)arg0 environment:(id)arg1 ;
-(id)itemProviderForCopy;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(void)fetchFileProviderURLWithCompletionHandler:(id)arg0 ;
-(void)fetchShareableURLWithCompletionHandler:(id)arg0 ;
-(void)performCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;


@end


#endif