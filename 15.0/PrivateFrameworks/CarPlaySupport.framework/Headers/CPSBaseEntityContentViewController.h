// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSBASEENTITYCONTENTVIEWCONTROLLER_H
#define CPSBASEENTITYCONTENTVIEWCONTROLLER_H

@class UIViewController, NSString, CPEntity;
@protocol CPSEntityContentViewControllerDelegate;


#import "CPSEntityResourceProvider.h"

@interface CPSBaseEntityContentViewController : UIViewController <CPSEntityContentViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CPEntity *entity; // ivar: _entity
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPSEntityResourceProvider *resourceProvider; // ivar: _resourceProvider
@property (readonly) Class superclass;


-(BOOL)shouldAppearInUnsafeArea;
-(BOOL)viewController:(id)arg0 didPressButton:(id)arg1 ;
-(id)initWithEntity:(id)arg0 resourceProvider:(id)arg1 ;
-(void)didUpdateEntity:(id)arg0 ;
-(void)updateWithEntity:(id)arg0 ;


@end


#endif