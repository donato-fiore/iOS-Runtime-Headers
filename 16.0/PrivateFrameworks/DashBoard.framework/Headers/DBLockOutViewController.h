// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBLOCKOUTVIEWCONTROLLER_H
#define DBLOCKOUTVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol DBLockOutViewDelegate, DBLockOutViewControllerDelegate;


#import "DBEnvironmentConfiguration.h"
#import "DBLockOutView.h"

@interface DBLockOutViewController : UIViewController <DBLockOutViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DBLockOutViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration; // ivar: _environmentConfiguration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger lockOutMode; // ivar: _lockOutMode
@property (retain, nonatomic) DBLockOutView *lockOutView; // ivar: _lockOutView
@property (readonly) Class superclass;


-(id)_newLockOutViewForMode:(NSInteger)arg0 ;
-(id)initWithEnvironmentConfiguration:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(void)lockOutView:(id)arg0 didTapButtonOfType:(NSUInteger)arg1 ;


@end


#endif