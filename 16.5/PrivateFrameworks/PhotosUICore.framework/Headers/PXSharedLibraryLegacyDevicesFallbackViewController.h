// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYLEGACYDEVICESFALLBACKVIEWCONTROLLER_H
#define PXSHAREDLIBRARYLEGACYDEVICESFALLBACKVIEWCONTROLLER_H

@class OBTableWelcomeController, NSArray, NSString;
@protocol PXAssistantViewController, UITableViewDelegate, UITableViewDataSource, PXAssistantViewControllerDelegate;



@interface PXSharedLibraryLegacyDevicesFallbackViewController : OBTableWelcomeController <PXAssistantViewController, UITableViewDelegate, UITableViewDataSource>

 {
    NSArray *_devices;
}


@property (weak, nonatomic) NSObject<PXAssistantViewControllerDelegate> *assistantViewControllerDelegate; // ivar: assistantViewControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithDevices:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)continueButtonTapped:(id)arg0 ;
-(void)learnMoreButtonTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif