// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMOVIEPLAYERVIEWCONTROLLER_H
#define MPMOVIEPLAYERVIEWCONTROLLER_H

@class UIViewController;


#import "MPMoviePlayerController.h"

@interface MPMoviePlayerViewController : UIViewController

@property (readonly, nonatomic) MPMoviePlayerController *moviePlayer; // ivar: _moviePlayer


-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentURL:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;


@end


#endif