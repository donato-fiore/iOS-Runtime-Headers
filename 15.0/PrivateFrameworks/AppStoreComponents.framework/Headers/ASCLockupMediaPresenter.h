// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCLOCKUPMEDIAPRESENTER_H
#define ASCLOCKUPMEDIAPRESENTER_H

@protocol ASCLockupMediaPresenterObserver, ASCLockupMediaPresenterView;

#import <Foundation/Foundation.h>

#import "ASCPresenterContext.h"
#import "ASCLockup.h"
#import "ASCPendingPromises.h"

@interface ASCLockupMediaPresenter : NSObject

@property (readonly, nonatomic) ASCPresenterContext *context; // ivar: _context
@property (copy, nonatomic) ASCLockup *lockup; // ivar: _lockup
@property (weak, nonatomic) NSObject<ASCLockupMediaPresenterObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) ASCPendingPromises *pendingArtworkPromises; // ivar: _pendingArtworkPromises
@property (readonly, nonatomic) NSObject<ASCLockupMediaPresenterView> *view; // ivar: _view


+(id)log;
-(NSUInteger)numberOfMediaViewsForLockup:(id)arg0 ;
-(id)artworkForLockup:(id)arg0 ;
-(id)initWithView:(id)arg0 lockupPresenter:(id)arg1 ;
-(id)initWithView:(id)arg0 lockupPresenter:(id)arg1 context:(id)arg2 ;
-(id)videoViewForLockup:(id)arg0 ;
-(void)dealloc;
-(void)lockupPresenterDidChange:(id)arg0 ;
-(void)performFollowUpWork:(id)arg0 ;
-(void)performScreenshotsFetch;
-(void)screenshotArtwork:(id)arg0 didFailFetchWithError:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)screenshotArtwork:(id)arg0 didFetchImage:(id)arg1 atIndex:(NSInteger)arg2 ;


@end


#endif