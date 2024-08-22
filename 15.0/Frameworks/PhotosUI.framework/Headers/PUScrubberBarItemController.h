// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSCRUBBERBARITEMCONTROLLER_H
#define PUSCRUBBERBARITEMCONTROLLER_H

@class UIBarButtonItem;

#import <Foundation/Foundation.h>

#import "PUScrubberView.h"
#import "PUBrowsingSession.h"

@interface PUScrubberBarItemController : NSObject {
    PUScrubberView *_scrubberView;
}


@property (retain, nonatomic) PUBrowsingSession *browsingSession; // ivar: _browsingSession
@property (readonly, nonatomic) UIBarButtonItem *scrubberBarButtonItem; // ivar: _scrubberBarButtonItem


-(void)_invalidateScrubberBarButtonItem;
-(void)_updateScrubberBarButtonItemIfNeeded;


@end


#endif