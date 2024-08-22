// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLGOOGLEWEBAUTHCONTROLLER_H
#define SLGOOGLEWEBAUTHCONTROLLER_H

@class UIViewController;



@interface SLGoogleWebAuthController : UIViewController

@property (copy, nonatomic) id *completion; // ivar: _completion


-(id)initWithAccount:(id)arg0 accountStore:(id)arg1 presentationBlock:(id)arg2 ;
-(id)initWithAccountDescription:(id)arg0 presentationBlock:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithYouTubeUsername:(id)arg0 accountDescription:(id)arg1 presentationBlock:(id)arg2 ;


@end


#endif