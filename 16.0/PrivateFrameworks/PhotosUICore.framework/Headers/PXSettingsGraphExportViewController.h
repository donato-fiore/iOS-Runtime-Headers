// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSETTINGSGRAPHEXPORTVIEWCONTROLLER_H
#define PXSETTINGSGRAPHEXPORTVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol MFMailComposeViewControllerDelegate;



@interface PXSettingsGraphExportViewController : UIViewController <MFMailComposeViewControllerDelegate>

 {
    BOOL _exportGraphOnViewDidAppear;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_exportGraph;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif