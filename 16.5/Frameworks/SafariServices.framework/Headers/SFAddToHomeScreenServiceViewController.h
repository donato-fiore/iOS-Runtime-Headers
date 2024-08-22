// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFADDTOHOMESCREENSERVICEVIEWCONTROLLER_H
#define SFADDTOHOMESCREENSERVICEVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol SFWebAppDataProviderDelegate, SFAddToHomeScreenServiceProtocol;


#import "SFWebAppDataProvider.h"

@interface SFAddToHomeScreenServiceViewController : UIViewController <SFWebAppDataProviderDelegate, SFAddToHomeScreenServiceProtocol>

 {
    SFWebAppDataProvider *_provider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dataProvider:(id)arg0 didFinishWithResult:(BOOL)arg1 ;
-(void)didFetchManifestData:(id)arg0 ;
-(void)didFetchWebClipMetadata:(id)arg0 ;
-(void)loadURL:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif