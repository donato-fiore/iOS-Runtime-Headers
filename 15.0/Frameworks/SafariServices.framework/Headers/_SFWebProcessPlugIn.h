// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFWEBPROCESSPLUGIN_H
#define _SFWEBPROCESSPLUGIN_H

@class WBSWebProcessPlugIn;



@interface _SFWebProcessPlugIn : WBSWebProcessPlugIn {
    *__sFILE _javaScriptConsoleOutputFile;
}




-(id)pageControllerWithBrowserContextController:(id)arg0 ;
-(void)dealloc;
-(void)didCreatePageController:(id)arg0 forBrowserContextController:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)webProcessPlugIn:(id)arg0 initializeWithObject:(id)arg1 ;
-(void)willDestroyPageController:(id)arg0 forBrowserContextController:(id)arg1 ;


@end


#endif