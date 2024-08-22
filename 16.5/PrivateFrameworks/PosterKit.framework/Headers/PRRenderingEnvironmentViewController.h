// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRRENDERINGENVIRONMENTVIEWCONTROLLER_H
#define PRRENDERINGENVIRONMENTVIEWCONTROLLER_H

@class UIViewController, FBSMutableSceneSettings, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, PRRenderingEnvironmentViewControllerDelegate;


#import "PRPosterEnvironmentImpl.h"

@interface PRRenderingEnvironmentViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

 {
    id<PRRenderingEnvironmentViewControllerDelegate> *_delegate;
    FBSMutableSceneSettings *_settings;
}


@property (readonly, nonatomic) PRPosterEnvironmentImpl *currentEnvironment; // ivar: _environment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithEnvironment:(id)arg0 delegate:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)cell:(id)arg0 presentViewController:(id)arg1 ;
-(void)cell:(id)arg0 valueChanged:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif