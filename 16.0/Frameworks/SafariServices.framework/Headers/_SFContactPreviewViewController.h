// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFCONTACTPREVIEWVIEWCONTROLLER_H
#define _SFCONTACTPREVIEWVIEWCONTROLLER_H

@class UINavigationController, NSString, NSURL, CNContactViewController;



@interface _SFContactPreviewViewController : UINavigationController {
    NSString *_filePath;
    NSURL *_sourceURL;
    CNContactViewController *_contactViewController;
    id *_beforeDismissHandler;
    BOOL _deleteFileWhenDone;
}




-(id)initWithFilePath:(id)arg0 sourceURL:(id)arg1 deleteFileWhenDone:(BOOL)arg2 beforeDismissHandler:(id)arg3 ;
-(void)_done:(id)arg0 ;
-(void)_presentActivityViewController:(id)arg0 ;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif