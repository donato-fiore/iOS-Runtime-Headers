// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVCOMMONSENSETEMPLATECONTROLLER_H
#define _TVCOMMONSENSETEMPLATECONTROLLER_H

@class UIViewController, IKViewElement;


#import "_TVCommonSenseView.h"

@interface _TVCommonSenseTemplateController : UIViewController

@property (retain, nonatomic) _TVCommonSenseView *commonSenseView; // ivar: _commonSenseView
@property (retain, nonatomic) IKViewElement *templateElement; // ivar: _templateElement


-(id)_infoTableFromElement:(id)arg0 ;
-(void)_loadTemplate;
-(void)_updateFooterWithElement:(id)arg0 ;
-(void)_updateHeaderWithElement:(id)arg0 ;
-(void)loadView;
-(void)updateWithCommonSenseTemplate:(id)arg0 ;


@end


#endif