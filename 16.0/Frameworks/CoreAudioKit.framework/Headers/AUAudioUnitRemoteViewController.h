// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUAUDIOUNITREMOTEVIEWCONTROLLER_H
#define AUAUDIOUNITREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol AUAudioUnitViewControllerHostInterface;



@interface AUAudioUnitRemoteViewController : UIRemoteViewController <AUAudioUnitViewControllerHostInterface>

 {
    BOOL _sizePending;
}




+(void)_fetchViewController:(id)arg0 requestIdentifier:(id)arg1 completion:(id)arg2 ;
+(void)_fetchViewControllerForExtension:(id)arg0 inputItems:(id)arg1 completion:(id)arg2 ;


@end


#endif