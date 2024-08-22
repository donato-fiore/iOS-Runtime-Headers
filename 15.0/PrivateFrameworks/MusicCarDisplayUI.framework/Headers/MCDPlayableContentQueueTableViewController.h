// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCDPLAYABLECONTENTQUEUETABLEVIEWCONTROLLER_H
#define MCDPLAYABLECONTENTQUEUETABLEVIEWCONTROLLER_H

@class UITableViewController;


#import "MCDPlayableContentPlaybackManager.h"

@interface MCDPlayableContentQueueTableViewController : UITableViewController

@property (retain, nonatomic) MCDPlayableContentPlaybackManager *contentManager; // ivar: _contentManager


-(id)initWithContentManager:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif