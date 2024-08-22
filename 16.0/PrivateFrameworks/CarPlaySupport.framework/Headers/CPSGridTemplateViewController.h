// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSGRIDTEMPLATEVIEWCONTROLLER_H
#define CPSGRIDTEMPLATEVIEWCONTROLLER_H

@class NSString, CPGridTemplate;
@protocol CPSButtonDelegate, CPGridTemplateProviding;


#import "CPSBaseTemplateViewController.h"
#import "CPSGridTemplateCollectionView.h"

@interface CPSGridTemplateViewController : CPSBaseTemplateViewController <CPSButtonDelegate, CPGridTemplateProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CPGridTemplate *gridTemplate;
@property (weak, nonatomic) CPSGridTemplateCollectionView *gridView; // ivar: _gridView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_wantsNowPlayingButton;
-(id)_buttonForIdentifier:(id)arg0 ;
-(id)_prepareCPSGridButtonsForButtons:(id)arg0 ;
-(id)initWithGridTemplate:(id)arg0 interfaceDelegate:(id)arg1 templateEnvironment:(id)arg2 ;
-(void)_viewDidLoad;
-(void)didSelectButton:(id)arg0 ;
-(void)reloadTemplate:(id)arg0 ;
-(void)setControl:(id)arg0 enabled:(BOOL)arg1 ;


@end


#endif