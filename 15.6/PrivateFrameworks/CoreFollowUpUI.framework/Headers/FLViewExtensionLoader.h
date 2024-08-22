// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLVIEWEXTENSIONLOADER_H
#define FLVIEWEXTENSIONLOADER_H

@class FLHeadlessExtensionLoader, UIViewController;



@interface FLViewExtensionLoader : FLHeadlessExtensionLoader {
    UIViewController *_extensionViewController;
}




-(BOOL)_setupSessionIfNeeded:(*id)arg0 ;
-(id)remoteViewController;
-(void)_setupSessionWithExtension:(id)arg0 completion:(id)arg1 ;


@end


#endif