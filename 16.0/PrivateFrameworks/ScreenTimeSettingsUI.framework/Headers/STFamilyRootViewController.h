// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STFAMILYROOTVIEWCONTROLLER_H
#define STFAMILYROOTVIEWCONTROLLER_H

@protocol STRootViewModelCoordinator;


#import "STListViewController.h"

@interface STFamilyRootViewController : STListViewController

@property (readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // ivar: _coordinator
@property (nonatomic) BOOL presentedAsModal; // ivar: _presentedAsModal


-(id)init;
-(id)initWithModalPresentation:(BOOL)arg0 ;


@end


#endif