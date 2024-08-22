// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMCOMPONENTVIEWCONTROLLER_H
#define PXCMMCOMPONENTVIEWCONTROLLER_H

@class UIViewController;


#import "PXCMMSession.h"

@interface PXCMMComponentViewController : UIViewController

@property (readonly, nonatomic) PXCMMSession *session; // ivar: _session


-(CGFloat)preferredContentHeightForWidth:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSession:(id)arg0 ;


@end


#endif